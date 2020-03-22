#include "dialog.h"
#include "ui_dialog.h"

void Dialog::on_btn_close_clicked()
{
    this->close();
}

void Dialog::on_btn_about_clicked()
{
    this->ab_win.exec();
}

void Dialog::clkUpdate()
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("hh:mm:ss");
//    qDebug() << str;
    ui->lbe_clk->setText(str);
}

void Dialog::update()
{
    static qint16 cnt = 0;
    cnt++;
    if(cnt == 60 * updateTime)   //60s = 1min
    {
        qDebug() << "start update data";
        disInfo("start update data");
        emit on_btn_update_clicked();//触发更新
        cnt = 0;
    }
}

void Dialog::on_btn_update_clicked()
{
    QUrl url;
    QString file_head;

    switch (apiID)
    {
    case 0:
        file_head = "data0";
        url.setUrl(apiUrl_0);
        break;
    case 1:
        file_head = "data1";
        url.setUrl(apiUrl_1);
        break;
    case 2:
        file_head = "data2";
        url.setUrl(apiUrl_2);
        break;
    case 3:
        file_head = "data3";
        url.setUrl(apiUrl_3);
        break;
    default:
        break;
    }

    qDebug() << "get api: " + url.toString();

    if(apiID != 0)
    {
        QString current_time =  QDateTime::currentDateTime().toString("yyyyMMdd_hh_mm_ss_zzz");
        filename = file_head + "_" +current_time + ".json";
    }
    else
        filename = "ip_addree.json";

    file = new QFile(filename);

    if(!file->open(QIODevice::WriteOnly))
    {
        qDebug() << "file open failed";
        delete file;
        file = 0;
        return;
    }
//    qDebug() << "network is online";
    reply = manager->get(QNetworkRequest(url));     //发送get请求数据

    connect(reply,SIGNAL(finished()),this,SLOT(httpFinished()));
    connect(reply,SIGNAL(readyRead()),this,SLOT(httpReadyRead()));
}

void Dialog::httpReadyRead()   //有可用数据
{
//    qDebug() << "write data";
    if(file)
        file->write(reply->readAll());  //如果文件存在，则写入文件
    else
        qDebug() << "don't have data to write";
}

void Dialog::httpFinished()  //完成下载
{
    file->flush();
    file->close();
    reply->deleteLater();
    reply = 0;
    delete file;
    file = 0;
//    qDebug() << "file download finished!";
    parseData(filename);
}
