#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
//网络相关头文件
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkConfigurationManager>
#include <QtNetwork/QSslConfiguration>
#include <QtNetwork/QSslSocket>

#include <QFile>
#include <QTimer>
#include <QLabel>

#include "about.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    bool isNetWorkOnline();
    void parseData(QString filename);
    void getData(QByteArray str);
    void lbeDisplay(QLabel *lbe, int num);
    void disInfo(QString info);
    void setLocation();

private slots:
    void on_btn_update_clicked();
    void httpReadyRead();   //有可用数据
    void httpFinished();  //完成下载
    void update();
    void on_btn_close_clicked();

    void on_btn_about_clicked();

private:
    Ui::Dialog *ui;
    QString api;
    QUrl url;

    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    QFile *file;
    QString filename;
    qint8 updateTime;     //默认5分钟更新一次
    QTimer *timer;
    qint16 update_cnt;
    about ab_win;
};

#endif // DIALOG_H
