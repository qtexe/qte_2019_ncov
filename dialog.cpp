#include "dialog.h"
#include "ui_dialog.h"
#include <QDesktopWidget>
#include <QDebug>
#include <QFile>
#include <QDate>

#include "cJSON.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("2019_ncov by wcc");
    //don't display question flag
//    this->setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
//    this->setWindowFlags(Qt::FramelessWindowHint);                  //don't display titlebar
//    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);     //don't display titlebar

    setLocation();

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(1000); //ms = 1s

    updateTime = 5;
    update_cnt = 0;

    manager = new QNetworkAccessManager(this);          //新建网络请求对象
    api = "http://view.inews.qq.com/g2/getOnsInfo?name=disease_h5";
    emit on_btn_update_clicked();
}
Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btn_update_clicked()
{
//    timer->stop();
    QString current_time =  QDateTime::currentDateTime().toString("yyyyMMdd_hh_mm_ss_zzz");
//    QString timestamp_str;
//    timestamp_str.setNum(timestamp, 10);
    QUrl url(api);
    disInfo("网络正常");
    qDebug() << "get data:" + url.toString();
    filename = "data_" +current_time + ".json";
    file = new QFile(filename);

    if(!file->open(QIODevice::WriteOnly))
    {
        qDebug() << "file open failed";
        delete file;
        file = 0;
        return;
    }

    qDebug() << "network is online";
    reply = manager->get(QNetworkRequest(url));     //发送get请求数据
    //下载完成执行槽函数
    connect(reply,SIGNAL(finished()),this,SLOT(httpFinished()));
    //有可用的数据
    connect(reply,SIGNAL(readyRead()),this,SLOT(httpReadyRead()));
}

void Dialog::parseData(QString filename)
{
    QFile file(filename);

    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "file open failed";
        return;
    }
    QByteArray allData = file.readAll();
    file.close();
//    qDebug() << allData;
    getData(allData);
    file.remove();            //删除文件
    return;
}

void Dialog::getData(QByteArray str)
{
    cJSON *ret_obj;
    cJSON *root_obj;

    root_obj = cJSON_Parse(str);   //创建JSON解析对象，返回JSON格式是否正确
    if (!root_obj)
    {
        disInfo("JSONj");
        qDebug() << "json format error";
    }
    else
    {
        disInfo("json format ok");
        qDebug() << "json format ok";

        ret_obj = cJSON_GetObjectItem(root_obj, "ret");
        if(cJSON_IsNumber(ret_obj))
        {
            int ret = 1;
            ret = ret_obj->valueint;
//            qDebug() << ret_obj->valueint;
        }

        char *data_str = cJSON_GetObjectItem(root_obj, "data")->valuestring;
        cJSON *data_obj = cJSON_Parse(data_str);
        if(!data_obj)
        {
            qDebug() << "data json err";
        }
        else
        {
            qDebug() << "data json ok";
            char *lastUpdateTime = cJSON_GetObjectItem(data_obj, "lastUpdateTime")->valuestring;
            qDebug() << lastUpdateTime;
            ui->lbe_update_time->setText(lastUpdateTime);
            cJSON *chinaTotal_obj = cJSON_GetObjectItem(data_obj, "chinaTotal");

            int chinaTotal_confirm    = cJSON_GetObjectItem(chinaTotal_obj, "confirm")->valueint;
            int chinaTotal_heal       = cJSON_GetObjectItem(chinaTotal_obj, "heal")->valueint;
            int chinaTotal_dead       = cJSON_GetObjectItem(chinaTotal_obj, "dead")->valueint;
            int chinaTotal_nowConfirm = cJSON_GetObjectItem(chinaTotal_obj, "nowConfirm")->valueint;
            int chinaTotal_suspect    = cJSON_GetObjectItem(chinaTotal_obj, "suspect")->valueint;
            int chinaTotal_nowSevere  = cJSON_GetObjectItem(chinaTotal_obj, "nowSevere")->valueint;

            ui->lbe_total_confirm->setNum(chinaTotal_confirm);
            ui->lbe_total_heal->setNum(chinaTotal_heal);
            ui->lbe_total_dead->setNum(chinaTotal_dead);
            ui->lbe_total_nowConfirm->setNum(chinaTotal_nowConfirm);
            ui->lbe_total_suspect->setNum(chinaTotal_suspect);
            ui->lbe_total_nowSevere->setNum(chinaTotal_nowSevere);

            cJSON *chinaAdd_obj = cJSON_GetObjectItem(data_obj, "chinaAdd");
            int chinaAdd_confirm    = cJSON_GetObjectItem(chinaAdd_obj, "confirm")->valueint;
            int chinaAdd_heal       = cJSON_GetObjectItem(chinaAdd_obj, "heal")->valueint;
            int chinaAdd_dead       = cJSON_GetObjectItem(chinaAdd_obj, "dead")->valueint;
            int chinaAdd_nowConfirm = cJSON_GetObjectItem(chinaAdd_obj, "nowConfirm")->valueint;
            int chinaAdd_suspect    = cJSON_GetObjectItem(chinaAdd_obj, "suspect")->valueint;
            int chinaAdd_nowSevere  = cJSON_GetObjectItem(chinaAdd_obj, "nowSevere")->valueint;

            lbeDisplay(ui->lbe_add_confirm, chinaAdd_confirm);
            lbeDisplay(ui->lbe_add_heal, chinaAdd_heal);
            lbeDisplay(ui->lbe_add_dead, chinaAdd_dead);
            lbeDisplay(ui->lbe_add_nowConfirm, chinaAdd_nowConfirm);
            lbeDisplay(ui->lbe_add_suspect, chinaAdd_suspect);
            lbeDisplay(ui->lbe_add_nowSevere, chinaAdd_nowSevere);
        }
//        cJSON_Delete(ret_obj);
//        cJSON_Delete(data_obj);
        cJSON_Delete(root_obj);//释放内存
        disInfo("更新完成");
    }
}

void Dialog::lbeDisplay(QLabel *lbe, int num)
{
    if(num > 0)
        lbe->setText("+" + QString::number(num));
    else
        lbe->setText(QString::number(num));
}

void Dialog::httpReadyRead()   //有可用数据
{
    if(file)
        file->write(reply->readAll());  //如果文件存在，则写入文件
}
void Dialog::httpFinished()  //完成下载
{
    disInfo("完成下载");
    file->flush();
    file->close();
    reply->deleteLater();
    reply = 0;
    delete file;
    file = 0;
    parseData(filename);
}
bool Dialog::isNetWorkOnline()
{
    QNetworkConfigurationManager mgr;
    return mgr.isOnline();
}

void Dialog::update()
{
    static qint16 cnt = 0;
    cnt++;
    if(cnt == 60 * updateTime)   //60s = 1min
    {
        update_cnt++;
        qDebug() << "start update data";
        disInfo("start update data");
        emit on_btn_update_clicked();//触发更新
        cnt = 0;
    }
}

void Dialog::disInfo(QString info)
{
        ui->lbe_info->setText(info);
}

void Dialog::on_btn_close_clicked()
{
    this->close();
}

void Dialog::on_btn_about_clicked()
{
    this->ab_win.exec();
}

void Dialog::setLocation()
{

    const QRect availableSize = QApplication::desktop()->availableGeometry(this);

    qint32 DESKTOP_QT4 = 264199;
    qint32 DESKTOP_QT5 = 329728;
    qint32 ARM_IMX287  = 263939;
    qint32 ARM_YA157C  = 264199;

    //output current qt version id
    qDebug() << QT_VERSION;

    //output curretn screen resolution ratio
    qint16 width  = availableSize.width();
    qint16 height = availableSize.height();
    qDebug() << "width: " << width << "height:" << height;

    if(QT_VERSION == ARM_IMX287)
        this->resize(width-5, height-15);
    else
        this->resize(width/3, height/3);

    qint16 loc_width = this->width();
    qint16 loc_height = this->height();
    qint16 loc_x = (width - loc_width) / 2;
    qint16 loc_y = (height - loc_height) / 2;
    qDebug() << "locx:" << loc_x << "locy" << loc_y;

    if(QT_VERSION == ARM_IMX287)
        this->move(0, 0);
    else
        this->move(loc_x, loc_y);
}
