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
#include <QNetworkInterface>

#include <QFile>
#include <QTimer>
#include <QLabel>
#include "cJSON.h"
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
    void lbeDisplay(QLabel *lbe, int num);
    void disInfo(QString info);
    void setLocation();
    QString GetLocalmachineIP();
    void init();
    void iconInit();

    void parseApi_0(QByteArray str);
    void parseApi_1(QByteArray str);
    void parseApi_2(QByteArray str);
    void parseApi_3(QByteArray str);

    void getChinaDayListData(cJSON *chinaDayList_arr);
    void getChinaDayAddListData(cJSON *chinaDayAddList_arr);
    void getArticelData(cJSON *article_arr);
    void getGlobalStatis(cJSON *globalStatis_obj);
    void getCityStatis(cJSON *cityStatis_obj);

private slots:
    void on_btn_update_clicked();
    void httpReadyRead();   //有可用数据
    void httpFinished();  //完成下载
    void update();
    void clkUpdate();
    void on_btn_close_clicked();
    void on_btn_about_clicked();

    void on_btn_autoUpdate_clicked();

private:
    Ui::Dialog *ui;
    QString api;
    QUrl url;
    QTimer *clk;
    qint8 updateTime;     //默认5分钟更新一次
    QTimer *timer;

//    QString apiUrl_0 = "https://ip.seeip.org/geoip";    //json
//    QString apiUrl_0 = "http://pv.sohu.com/cityjson";
//    QString apiUrl_0 = "https://apis.map.qq.com/ws/location/v1/ip?key=RMJBZ-2IP64-CSNUJ-DLU7O-O3DF7-MMB5E";
    QString apiUrl_0 = "http://ip-api.com/json/?lang=zh-CN";
//    QString apiUrl_0 = "http://ip-api.com/json";    //ip location
    QString apiUrl_1 = "http://view.inews.qq.com/g2/getOnsInfo?name=disease_h5";
    QString apiUrl_2 = "http://view.inews.qq.com/g2/getOnsInfo?name=disease_other";
    QString apiUrl_3 = "https://vp.fact.qq.com/loadmore?page=0";
//    QString apiUrl_4 = "https//vp.fact.qq.com/miniArtData?id=a2141851348ee5f3772c761e25bb57d7";
    qint8 apiID = 0;

    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    QFile *file;
    QString filename;

    qint16 cnt_success;
    qint16 cnt_error;

    QString bgmClr_true = "42a163";
    QString bgmClr_fake = "c41f20";
    QString bgmClr_doubt = "484848";

    about ab_win;
};

#endif // DIALOG_H
