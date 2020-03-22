#include "dialog.h"
#include "ui_dialog.h"
#include <QDesktopWidget>
#include <QDebug>
#include <QFile>
#include <QDate>
#include <QHostInfo>
#include <QHostAddress>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

//    system("./qt_run.sh");
//    system("./qt_run.sh");
//    qDebug() << "Screen Init Sucess!";
//    qDebug() << "Connect WiFi.............";
//    system("./connect_wifi.sh");
    init();
    this->setWindowTitle("2019_ncov by wcc");
    this->setWindowFlags(Qt::FramelessWindowHint);                  //don't display titlebar
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::init()
{
    iconInit();
    QString ip = GetLocalmachineIP();

//    setLocation();

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(1000); //ms = 1s

    clk = new QTimer(this);
    connect(clk, SIGNAL(timeout()), this, SLOT(clkUpdate()));
    clk->start(1000); //ms = 1s

    updateTime = 5;
    cnt_success = 0;
    cnt_error = 0;

    manager = new QNetworkAccessManager(this);          //新建网络请求对象
    api = "http://view.inews.qq.com/g2/getOnsInfo?name=disease_h5";
    emit on_btn_update_clicked();
}

void Dialog::disInfo(QString info)
{
//    ui->lbe_info->setText(info);
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

void Dialog::on_btn_autoUpdate_clicked()
{
    static bool flag = true;
    flag = !flag;
    if(flag)
    {
        ui->btn_autoUpdate->setText(QChar(0xf205));
        qDebug() << "timer is start";
        timer->start();
    }
    else
    {
        ui->btn_autoUpdate->setText(QChar(0xf204));
        qDebug() << "timer is stop";
        timer->stop();
    }
}
