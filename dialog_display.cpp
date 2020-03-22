#include "dialog.h"
#include "ui_dialog.h"
#include <QFontDatabase>

void Dialog::lbeDisplay(QLabel *lbe, int num)
{
    if(num > 0)
        lbe->setText("+" + QString::number(num));
    else
        lbe->setText(QString::number(num));
}

void Dialog::iconInit()
{
    int fontId = QFontDatabase::addApplicationFont(":/fontawesome-webfont.ttf");
    QString fontName = QFontDatabase::applicationFontFamilies(fontId).at(0);
    QFont iconFont = QFont(fontName);
    iconFont.setPointSize(10);

    ui->btn_min->setFont(iconFont);
    ui->btn_max->setFont(iconFont);
    ui->btn_close->setFont(iconFont);
    ui->btn_update->setFont(iconFont);
    ui->btn_about->setFont(iconFont);

    ui->btn_battery->setFont(iconFont);
    ui->btn_ble->setFont(iconFont);
    ui->btn_msg->setFont(iconFont);
    ui->btn_wifi->setFont(iconFont);
    ui->btn_vol->setFont(iconFont);

    ui->label_global->setFont(iconFont);
    ui->label_china->setFont(iconFont);
    ui->label_news->setFont(iconFont);
    ui->label_ok->setFont(iconFont);
    ui->label_err->setFont(iconFont);
    ui->label_ip->setFont(iconFont);

    ui->btn_autoUpdate->setFont(iconFont);
    ui->btn_autoUpdate->setText(QChar(0xf205));

//    ui->label_city->setFont(iconFont);
//    ui->label_query->setFont(iconFont);
//    ui->label_city->setText();

    ui->btn_close->setText(QChar(0xf2d3));
    ui->btn_max->setText(QChar(0xf2d0));
    ui->btn_min->setText(QChar(0xf146));
    ui->btn_update->setText(QChar(0xf021));
    ui->btn_about->setText(QChar(0xf059));

    ui->btn_battery->setText(QChar(0xf242));
    ui->btn_ble->setText(QChar(0xf294));        //f293
    ui->btn_msg->setText(QChar(0xf0e0));
    ui->btn_wifi->setText(QChar(0xf1eb));
    ui->btn_vol->setText(QChar(0xf028));

    ui->label_global->setText(QChar(0xf0ac));
    ui->label_china->setText(QChar(0xf124));
    ui->label_news->setText(QChar(0xf0f9));
    ui->label_ok->setText(QChar(0xf058));
    ui->label_err->setText(QChar(0xf06a));
    ui->label_ip->setText(QChar(0xf041));   //0xf09e
}



