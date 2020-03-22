/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *btn_close;
    QPushButton *btn_min;
    QPushButton *btn_max;
    QPushButton *btn_update;
    QPushButton *btn_about;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lbe_clk;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_msg;
    QPushButton *btn_ble;
    QPushButton *btn_vol;
    QPushButton *btn_wifi;
    QPushButton *btn_battery;
    QHBoxLayout *horizontalLayout_20;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout;
    QLabel *lbe_pic;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_11;
    QLabel *lbe_update_time;
    QPushButton *btn_autoUpdate;
    QSpacerItem *horizontalSpacer;
    QLabel *label_ip;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_city;
    QLabel *label_query;
    QLabel *label_ok;
    QLabel *lbe_success;
    QLabel *label_err;
    QLabel *lbe_error;
    QGridLayout *gridLayout;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_12;
    QLabel *lbe_add_nowSevere;
    QLabel *lbe_total_nowSevere;
    QLabel *lbe_heal_2;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_16;
    QLabel *lbe_global_nowConfirmAdd;
    QLabel *lbe_global_nowConfirm;
    QLabel *lbe_confirm_5;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLabel *lbe_add_suspect;
    QLabel *lbe_total_suspect;
    QLabel *lbe_suspect;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLabel *lbe_add_heal;
    QLabel *lbe_total_heal;
    QLabel *lbe_heal;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_8;
    QLabel *lbe_zero_add;
    QLabel *lbe_zeroCity;
    QLabel *lbe_zeroCity_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLabel *lbe_add_confirm;
    QLabel *lbe_total_confirm;
    QLabel *lbe_confirm_2;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_10;
    QLabel *lbe_add_nowConfirm;
    QLabel *lbe_total_nowConfirm;
    QLabel *lbe_confirm_3;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_15;
    QLabel *lbe_notzero_add;
    QLabel *lbe_notzeroCity;
    QLabel *lbe_notezeroCity_3;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_18;
    QLabel *lbe_global_healAdd;
    QLabel *lbe_global_heal;
    QLabel *lbe_heal_3;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *lbe_add_dead;
    QLabel *lbe_total_dead;
    QLabel *lbe_dead;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_19;
    QLabel *lbe_global_deadAdd;
    QLabel *lbe_global_dead;
    QLabel *lbe_dead_2;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_17;
    QLabel *lbe_global_confirmAdd;
    QLabel *lbe_global_confirm;
    QLabel *lbe_confirm_6;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_china;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_global;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_8;
    QLabel *lbe_hostinfo_2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_news;
    QLabel *label_30;
    QSpacerItem *horizontalSpacer_6;
    QTextBrowser *tb_news;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1024, 600);
        Dialog->setMinimumSize(QSize(1024, 600));
        Dialog->setMaximumSize(QSize(1024, 600));
        QFont font;
        font.setPointSize(3);
        Dialog->setFont(font);
        Dialog->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        verticalLayout_16 = new QVBoxLayout(Dialog);
        verticalLayout_16->setSpacing(3);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(2);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, -1, 0, -1);
        btn_close = new QPushButton(Dialog);
        btn_close->setObjectName(QStringLiteral("btn_close"));
        btn_close->setMinimumSize(QSize(35, 25));
        btn_close->setMaximumSize(QSize(35, 25));
        btn_close->setStyleSheet(QStringLiteral("border-color: rgb(161, 161, 161);"));
        btn_close->setIconSize(QSize(10, 10));
        btn_close->setFlat(true);

        horizontalLayout_10->addWidget(btn_close);

        btn_min = new QPushButton(Dialog);
        btn_min->setObjectName(QStringLiteral("btn_min"));
        btn_min->setMinimumSize(QSize(35, 25));
        btn_min->setMaximumSize(QSize(35, 25));
        btn_min->setStyleSheet(QStringLiteral("border-color: rgb(161, 161, 161);"));
        btn_min->setIconSize(QSize(10, 10));
        btn_min->setFlat(true);

        horizontalLayout_10->addWidget(btn_min);

        btn_max = new QPushButton(Dialog);
        btn_max->setObjectName(QStringLiteral("btn_max"));
        btn_max->setMinimumSize(QSize(35, 25));
        btn_max->setMaximumSize(QSize(35, 25));
        btn_max->setStyleSheet(QStringLiteral("border-color: rgb(161, 161, 161);"));
        btn_max->setIconSize(QSize(10, 10));
        btn_max->setFlat(true);

        horizontalLayout_10->addWidget(btn_max);

        btn_update = new QPushButton(Dialog);
        btn_update->setObjectName(QStringLiteral("btn_update"));
        btn_update->setMinimumSize(QSize(35, 25));
        btn_update->setMaximumSize(QSize(35, 25));
        btn_update->setStyleSheet(QStringLiteral("border-color: rgb(161, 161, 161);"));
        btn_update->setIconSize(QSize(10, 10));
        btn_update->setFlat(true);

        horizontalLayout_10->addWidget(btn_update);

        btn_about = new QPushButton(Dialog);
        btn_about->setObjectName(QStringLiteral("btn_about"));
        btn_about->setMinimumSize(QSize(35, 25));
        btn_about->setMaximumSize(QSize(35, 25));
        btn_about->setStyleSheet(QStringLiteral("border-color: rgb(161, 161, 161);"));
        btn_about->setIconSize(QSize(10, 10));
        btn_about->setFlat(true);

        horizontalLayout_10->addWidget(btn_about);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);

        lbe_clk = new QLabel(Dialog);
        lbe_clk->setObjectName(QStringLiteral("lbe_clk"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        lbe_clk->setFont(font1);

        horizontalLayout_10->addWidget(lbe_clk);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        btn_msg = new QPushButton(Dialog);
        btn_msg->setObjectName(QStringLiteral("btn_msg"));
        btn_msg->setMinimumSize(QSize(35, 25));
        btn_msg->setMaximumSize(QSize(35, 25));
        btn_msg->setLayoutDirection(Qt::LeftToRight);
        btn_msg->setStyleSheet(QStringLiteral("border-color: rgb(161, 161, 161);"));
        btn_msg->setIconSize(QSize(10, 10));
        btn_msg->setFlat(true);

        horizontalLayout_10->addWidget(btn_msg);

        btn_ble = new QPushButton(Dialog);
        btn_ble->setObjectName(QStringLiteral("btn_ble"));
        btn_ble->setMinimumSize(QSize(35, 25));
        btn_ble->setMaximumSize(QSize(35, 25));
        btn_ble->setLayoutDirection(Qt::LeftToRight);
        btn_ble->setStyleSheet(QStringLiteral("border-color: rgb(161, 161, 161);"));
        btn_ble->setIconSize(QSize(10, 10));
        btn_ble->setFlat(true);

        horizontalLayout_10->addWidget(btn_ble);

        btn_vol = new QPushButton(Dialog);
        btn_vol->setObjectName(QStringLiteral("btn_vol"));
        btn_vol->setMinimumSize(QSize(35, 25));
        btn_vol->setMaximumSize(QSize(35, 25));
        btn_vol->setLayoutDirection(Qt::LeftToRight);
        btn_vol->setStyleSheet(QStringLiteral("border-color: rgb(161, 161, 161);"));
        btn_vol->setIconSize(QSize(10, 10));
        btn_vol->setFlat(true);

        horizontalLayout_10->addWidget(btn_vol);

        btn_wifi = new QPushButton(Dialog);
        btn_wifi->setObjectName(QStringLiteral("btn_wifi"));
        btn_wifi->setMinimumSize(QSize(35, 25));
        btn_wifi->setMaximumSize(QSize(35, 25));
        btn_wifi->setLayoutDirection(Qt::LeftToRight);
        btn_wifi->setStyleSheet(QStringLiteral("border-color: rgb(161, 161, 161);"));
        btn_wifi->setIconSize(QSize(10, 10));
        btn_wifi->setFlat(true);

        horizontalLayout_10->addWidget(btn_wifi);

        btn_battery = new QPushButton(Dialog);
        btn_battery->setObjectName(QStringLiteral("btn_battery"));
        btn_battery->setMinimumSize(QSize(35, 25));
        btn_battery->setMaximumSize(QSize(35, 25));
        btn_battery->setLayoutDirection(Qt::LeftToRight);
        btn_battery->setStyleSheet(QStringLiteral("border-color: rgb(161, 161, 161);"));
        btn_battery->setIconSize(QSize(10, 10));
        btn_battery->setFlat(true);

        horizontalLayout_10->addWidget(btn_battery);


        verticalLayout_16->addLayout(horizontalLayout_10);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lbe_pic = new QLabel(Dialog);
        lbe_pic->setObjectName(QStringLiteral("lbe_pic"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbe_pic->sizePolicy().hasHeightForWidth());
        lbe_pic->setSizePolicy(sizePolicy);
        lbe_pic->setMinimumSize(QSize(0, 118));
        lbe_pic->setStyleSheet(QStringLiteral("image: url(:/new_top.jpg);"));
        lbe_pic->setScaledContents(true);
        lbe_pic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lbe_pic->setOpenExternalLinks(true);

        verticalLayout->addWidget(lbe_pic);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_11 = new QLabel(Dialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        label_11->setFont(font2);
        label_11->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(label_11);

        lbe_update_time = new QLabel(Dialog);
        lbe_update_time->setObjectName(QStringLiteral("lbe_update_time"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(9);
        lbe_update_time->setFont(font3);
        lbe_update_time->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));

        horizontalLayout_2->addWidget(lbe_update_time);

        btn_autoUpdate = new QPushButton(Dialog);
        btn_autoUpdate->setObjectName(QStringLiteral("btn_autoUpdate"));
        btn_autoUpdate->setMinimumSize(QSize(35, 25));
        btn_autoUpdate->setMaximumSize(QSize(35, 25));
        QFont font4;
        font4.setPointSize(11);
        btn_autoUpdate->setFont(font4);
        btn_autoUpdate->setStyleSheet(QStringLiteral("color: rgb(0, 170, 0);"));
        btn_autoUpdate->setIconSize(QSize(10, 10));
        btn_autoUpdate->setFlat(true);

        horizontalLayout_2->addWidget(btn_autoUpdate);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_ip = new QLabel(Dialog);
        label_ip->setObjectName(QStringLiteral("label_ip"));
        QFont font5;
        font5.setPointSize(9);
        label_ip->setFont(font5);
        label_ip->setStyleSheet(QStringLiteral("color: rgb(0, 85, 127);"));
        label_ip->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_ip);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_city = new QLabel(Dialog);
        label_city->setObjectName(QStringLiteral("label_city"));
        QFont font6;
        font6.setPointSize(10);
        label_city->setFont(font6);
        label_city->setStyleSheet(QStringLiteral("color: rgb(0, 85, 127);"));
        label_city->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_city);

        label_query = new QLabel(Dialog);
        label_query->setObjectName(QStringLiteral("label_query"));
        label_query->setFont(font6);
        label_query->setStyleSheet(QStringLiteral("color: rgb(0, 85, 127);"));
        label_query->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_query);


        horizontalLayout_2->addLayout(horizontalLayout_13);

        label_ok = new QLabel(Dialog);
        label_ok->setObjectName(QStringLiteral("label_ok"));
        label_ok->setFont(font2);
        label_ok->setStyleSheet(QStringLiteral("color: rgb(0, 170, 0);"));
        label_ok->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_ok);

        lbe_success = new QLabel(Dialog);
        lbe_success->setObjectName(QStringLiteral("lbe_success"));
        lbe_success->setFont(font2);
        lbe_success->setStyleSheet(QStringLiteral("color: rgb(0, 170, 0);"));
        lbe_success->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lbe_success);

        label_err = new QLabel(Dialog);
        label_err->setObjectName(QStringLiteral("label_err"));
        label_err->setFont(font2);
        label_err->setStyleSheet(QStringLiteral("color: rgb(255, 85, 0);"));
        label_err->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_err);

        lbe_error = new QLabel(Dialog);
        lbe_error->setObjectName(QStringLiteral("lbe_error"));
        lbe_error->setFont(font2);
        lbe_error->setStyleSheet(QStringLiteral("color: rgb(255, 85, 0);"));
        lbe_error->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lbe_error);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 5);
        horizontalLayout_2->setStretch(2, 4);
        horizontalLayout_2->setStretch(3, 18);
        horizontalLayout_2->setStretch(7, 1);
        horizontalLayout_2->setStretch(9, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 4);
        verticalLayout->setStretch(1, 1);

        verticalLayout_9->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget_5 = new QWidget(Dialog);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setStyleSheet(QLatin1String("background-color: rgb(250, 242, 246);\n"
""));
        verticalLayout_5 = new QVBoxLayout(widget_5);
        verticalLayout_5->setSpacing(1);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(1, 1, 1, 1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_12 = new QLabel(widget_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font3);
        label_12->setStyleSheet(QStringLiteral("color: rgb(79, 79, 79);"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_12);

        lbe_add_nowSevere = new QLabel(widget_5);
        lbe_add_nowSevere->setObjectName(QStringLiteral("lbe_add_nowSevere"));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font7.setPointSize(10);
        lbe_add_nowSevere->setFont(font7);
        lbe_add_nowSevere->setStyleSheet(QStringLiteral("color: rgb(202,63,129);"));

        horizontalLayout->addWidget(lbe_add_nowSevere);


        verticalLayout_5->addLayout(horizontalLayout);

        lbe_total_nowSevere = new QLabel(widget_5);
        lbe_total_nowSevere->setObjectName(QStringLiteral("lbe_total_nowSevere"));
        QFont font8;
        font8.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font8.setPointSize(18);
        font8.setBold(true);
        font8.setWeight(75);
        lbe_total_nowSevere->setFont(font8);
        lbe_total_nowSevere->setStyleSheet(QStringLiteral("color: rgb(202,63,129);"));
        lbe_total_nowSevere->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lbe_total_nowSevere);

        lbe_heal_2 = new QLabel(widget_5);
        lbe_heal_2->setObjectName(QStringLiteral("lbe_heal_2"));
        lbe_heal_2->setFont(font7);
        lbe_heal_2->setStyleSheet(QStringLiteral(""));
        lbe_heal_2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lbe_heal_2);


        gridLayout->addWidget(widget_5, 2, 2, 1, 1);

        widget_9 = new QWidget(Dialog);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setStyleSheet(QLatin1String("background-color: rgb(253, 241, 241);\n"
"border-bottom-left-radius:10px;\n"
"border-top-left-radius:10px;\n"
""));
        verticalLayout_13 = new QVBoxLayout(widget_9);
        verticalLayout_13->setSpacing(1);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_16 = new QLabel(widget_9);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font3);
        label_16->setStyleSheet(QStringLiteral("color: rgb(79, 79, 79);"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_16->addWidget(label_16);

        lbe_global_nowConfirmAdd = new QLabel(widget_9);
        lbe_global_nowConfirmAdd->setObjectName(QStringLiteral("lbe_global_nowConfirmAdd"));
        lbe_global_nowConfirmAdd->setFont(font7);
        lbe_global_nowConfirmAdd->setStyleSheet(QStringLiteral("color: rgb(245, 82, 83);"));

        horizontalLayout_16->addWidget(lbe_global_nowConfirmAdd);


        verticalLayout_13->addLayout(horizontalLayout_16);

        lbe_global_nowConfirm = new QLabel(widget_9);
        lbe_global_nowConfirm->setObjectName(QStringLiteral("lbe_global_nowConfirm"));
        lbe_global_nowConfirm->setFont(font8);
        lbe_global_nowConfirm->setLayoutDirection(Qt::LeftToRight);
        lbe_global_nowConfirm->setStyleSheet(QStringLiteral("color: rgb(245, 82, 83);"));
        lbe_global_nowConfirm->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(lbe_global_nowConfirm);

        lbe_confirm_5 = new QLabel(widget_9);
        lbe_confirm_5->setObjectName(QStringLiteral("lbe_confirm_5"));
        lbe_confirm_5->setFont(font7);
        lbe_confirm_5->setStyleSheet(QStringLiteral(""));
        lbe_confirm_5->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(lbe_confirm_5);


        gridLayout->addWidget(widget_9, 4, 0, 1, 1);

        widget_6 = new QWidget(Dialog);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 245, 233);"));
        verticalLayout_6 = new QVBoxLayout(widget_6);
        verticalLayout_6->setSpacing(1);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font3);
        label_6->setStyleSheet(QStringLiteral("color: rgb(79, 79, 79);"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_6);

        lbe_add_suspect = new QLabel(widget_6);
        lbe_add_suspect->setObjectName(QStringLiteral("lbe_add_suspect"));
        lbe_add_suspect->setFont(font7);
        lbe_add_suspect->setStyleSheet(QStringLiteral("color: rgb(255, 150, 30);"));

        horizontalLayout_7->addWidget(lbe_add_suspect);


        verticalLayout_6->addLayout(horizontalLayout_7);

        lbe_total_suspect = new QLabel(widget_6);
        lbe_total_suspect->setObjectName(QStringLiteral("lbe_total_suspect"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbe_total_suspect->sizePolicy().hasHeightForWidth());
        lbe_total_suspect->setSizePolicy(sizePolicy1);
        lbe_total_suspect->setFont(font8);
        lbe_total_suspect->setStyleSheet(QLatin1String("color: rgb(255, 150, 30);\n"
""));
        lbe_total_suspect->setTextFormat(Qt::AutoText);
        lbe_total_suspect->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(lbe_total_suspect);

        lbe_suspect = new QLabel(widget_6);
        lbe_suspect->setObjectName(QStringLiteral("lbe_suspect"));
        lbe_suspect->setFont(font7);
        lbe_suspect->setStyleSheet(QStringLiteral(""));
        lbe_suspect->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(lbe_suspect);


        gridLayout->addWidget(widget_6, 2, 1, 1, 1);

        widget_2 = new QWidget(Dialog);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QStringLiteral("background-color: rgb(241, 248, 244);"));
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setSpacing(1);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font3);
        label_7->setStyleSheet(QStringLiteral("color: rgb(79, 79, 79);"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_7);

        lbe_add_heal = new QLabel(widget_2);
        lbe_add_heal->setObjectName(QStringLiteral("lbe_add_heal"));
        lbe_add_heal->setFont(font7);
        lbe_add_heal->setStyleSheet(QStringLiteral("color: rgb(23, 139, 80);"));

        horizontalLayout_6->addWidget(lbe_add_heal);


        verticalLayout_4->addLayout(horizontalLayout_6);

        lbe_total_heal = new QLabel(widget_2);
        lbe_total_heal->setObjectName(QStringLiteral("lbe_total_heal"));
        lbe_total_heal->setFont(font8);
        lbe_total_heal->setStyleSheet(QStringLiteral("color: rgb(23, 139, 80);"));
        lbe_total_heal->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lbe_total_heal);

        lbe_heal = new QLabel(widget_2);
        lbe_heal->setObjectName(QStringLiteral("lbe_heal"));
        lbe_heal->setFont(font7);
        lbe_heal->setStyleSheet(QStringLiteral(""));
        lbe_heal->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lbe_heal);


        gridLayout->addWidget(widget_2, 1, 1, 1, 1);

        widget_8 = new QWidget(Dialog);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setStyleSheet(QLatin1String("background-color: rgb(241, 248, 244);\n"
"border-top-right-radius:10px"));
        verticalLayout_12 = new QVBoxLayout(widget_8);
        verticalLayout_12->setSpacing(1);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_8 = new QLabel(widget_8);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font3);
        label_8->setStyleSheet(QStringLiteral("color: rgb(79, 79, 79);"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(label_8);

        lbe_zero_add = new QLabel(widget_8);
        lbe_zero_add->setObjectName(QStringLiteral("lbe_zero_add"));
        lbe_zero_add->setFont(font3);
        lbe_zero_add->setStyleSheet(QStringLiteral("color: rgb(0, 85, 255);"));

        horizontalLayout_12->addWidget(lbe_zero_add);


        verticalLayout_12->addLayout(horizontalLayout_12);

        lbe_zeroCity = new QLabel(widget_8);
        lbe_zeroCity->setObjectName(QStringLiteral("lbe_zeroCity"));
        lbe_zeroCity->setFont(font8);
        lbe_zeroCity->setStyleSheet(QStringLiteral("color: rgb(0, 85, 255);"));
        lbe_zeroCity->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(lbe_zeroCity);

        lbe_zeroCity_3 = new QLabel(widget_8);
        lbe_zeroCity_3->setObjectName(QStringLiteral("lbe_zeroCity_3"));
        lbe_zeroCity_3->setFont(font7);
        lbe_zeroCity_3->setStyleSheet(QStringLiteral(""));
        lbe_zeroCity_3->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(lbe_zeroCity_3);


        gridLayout->addWidget(widget_8, 1, 3, 1, 1);

        widget = new QWidget(Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setStyleSheet(QLatin1String("background-color: rgb(253,241,241);\n"
"border-top-left-radius:10px;"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font3);
        label_9->setStyleSheet(QStringLiteral("color: rgb(79, 79, 79);"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_9);

        lbe_add_confirm = new QLabel(widget);
        lbe_add_confirm->setObjectName(QStringLiteral("lbe_add_confirm"));
        lbe_add_confirm->setFont(font7);
        lbe_add_confirm->setStyleSheet(QStringLiteral("color: rgb(204,30,30);"));

        horizontalLayout_4->addWidget(lbe_add_confirm);


        verticalLayout_2->addLayout(horizontalLayout_4);

        lbe_total_confirm = new QLabel(widget);
        lbe_total_confirm->setObjectName(QStringLiteral("lbe_total_confirm"));
        QFont font9;
        font9.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font9.setPointSize(18);
        font9.setBold(true);
        font9.setWeight(75);
        font9.setStyleStrategy(QFont::PreferDefault);
        lbe_total_confirm->setFont(font9);
        lbe_total_confirm->setLayoutDirection(Qt::LeftToRight);
        lbe_total_confirm->setStyleSheet(QStringLiteral("color: rgb(204,30,30);"));
        lbe_total_confirm->setLineWidth(1);
        lbe_total_confirm->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbe_total_confirm);

        lbe_confirm_2 = new QLabel(widget);
        lbe_confirm_2->setObjectName(QStringLiteral("lbe_confirm_2"));
        lbe_confirm_2->setFont(font7);
        lbe_confirm_2->setStyleSheet(QStringLiteral(""));
        lbe_confirm_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbe_confirm_2);


        gridLayout->addWidget(widget, 1, 0, 1, 1);

        widget_4 = new QWidget(Dialog);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setStyleSheet(QLatin1String("background-color: rgb(253, 241, 241);\n"
"border-bottom-left-radius:10px\n"
""));
        verticalLayout_11 = new QVBoxLayout(widget_4);
        verticalLayout_11->setSpacing(1);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_10 = new QLabel(widget_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font3);
        label_10->setStyleSheet(QStringLiteral("color: rgb(79, 79, 79);"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(label_10);

        lbe_add_nowConfirm = new QLabel(widget_4);
        lbe_add_nowConfirm->setObjectName(QStringLiteral("lbe_add_nowConfirm"));
        lbe_add_nowConfirm->setFont(font7);
        lbe_add_nowConfirm->setStyleSheet(QStringLiteral("color: rgb(245, 82, 83);"));

        horizontalLayout_15->addWidget(lbe_add_nowConfirm);


        verticalLayout_11->addLayout(horizontalLayout_15);

        lbe_total_nowConfirm = new QLabel(widget_4);
        lbe_total_nowConfirm->setObjectName(QStringLiteral("lbe_total_nowConfirm"));
        lbe_total_nowConfirm->setFont(font8);
        lbe_total_nowConfirm->setLayoutDirection(Qt::LeftToRight);
        lbe_total_nowConfirm->setStyleSheet(QStringLiteral("color: rgb(245, 82, 83);"));
        lbe_total_nowConfirm->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(lbe_total_nowConfirm);

        lbe_confirm_3 = new QLabel(widget_4);
        lbe_confirm_3->setObjectName(QStringLiteral("lbe_confirm_3"));
        lbe_confirm_3->setFont(font7);
        lbe_confirm_3->setStyleSheet(QStringLiteral(""));
        lbe_confirm_3->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(lbe_confirm_3);


        gridLayout->addWidget(widget_4, 2, 0, 1, 1);

        widget_7 = new QWidget(Dialog);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        sizePolicy1.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy1);
        widget_7->setStyleSheet(QLatin1String("background-color: rgb(253,241,241);\n"
"border-bottom-right-radius:10px"));
        verticalLayout_10 = new QVBoxLayout(widget_7);
        verticalLayout_10->setSpacing(1);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_15 = new QLabel(widget_7);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font3);
        label_15->setStyleSheet(QStringLiteral("color: rgb(79, 79, 79);"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_15);

        lbe_notzero_add = new QLabel(widget_7);
        lbe_notzero_add->setObjectName(QStringLiteral("lbe_notzero_add"));
        lbe_notzero_add->setFont(font3);
        lbe_notzero_add->setStyleSheet(QStringLiteral("color: rgb(255, 0, 127);"));

        horizontalLayout_9->addWidget(lbe_notzero_add);


        verticalLayout_10->addLayout(horizontalLayout_9);

        lbe_notzeroCity = new QLabel(widget_7);
        lbe_notzeroCity->setObjectName(QStringLiteral("lbe_notzeroCity"));
        lbe_notzeroCity->setFont(font9);
        lbe_notzeroCity->setLayoutDirection(Qt::LeftToRight);
        lbe_notzeroCity->setStyleSheet(QStringLiteral("color: rgb(255, 0, 127);"));
        lbe_notzeroCity->setLineWidth(1);
        lbe_notzeroCity->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(lbe_notzeroCity);

        lbe_notezeroCity_3 = new QLabel(widget_7);
        lbe_notezeroCity_3->setObjectName(QStringLiteral("lbe_notezeroCity_3"));
        lbe_notezeroCity_3->setFont(font7);
        lbe_notezeroCity_3->setStyleSheet(QStringLiteral(""));
        lbe_notezeroCity_3->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(lbe_notezeroCity_3);


        gridLayout->addWidget(widget_7, 2, 3, 1, 1);

        widget_11 = new QWidget(Dialog);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        widget_11->setStyleSheet(QStringLiteral("background-color: rgb(241, 248, 244);"));
        verticalLayout_15 = new QVBoxLayout(widget_11);
        verticalLayout_15->setSpacing(1);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_18 = new QLabel(widget_11);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font3);
        label_18->setStyleSheet(QStringLiteral("color: rgb(79, 79, 79);"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_18->addWidget(label_18);

        lbe_global_healAdd = new QLabel(widget_11);
        lbe_global_healAdd->setObjectName(QStringLiteral("lbe_global_healAdd"));
        lbe_global_healAdd->setFont(font7);
        lbe_global_healAdd->setStyleSheet(QStringLiteral("color: rgb(23, 139, 80);"));

        horizontalLayout_18->addWidget(lbe_global_healAdd);


        verticalLayout_15->addLayout(horizontalLayout_18);

        lbe_global_heal = new QLabel(widget_11);
        lbe_global_heal->setObjectName(QStringLiteral("lbe_global_heal"));
        lbe_global_heal->setFont(font8);
        lbe_global_heal->setStyleSheet(QStringLiteral("color: rgb(23, 139, 80);"));
        lbe_global_heal->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(lbe_global_heal);

        lbe_heal_3 = new QLabel(widget_11);
        lbe_heal_3->setObjectName(QStringLiteral("lbe_heal_3"));
        lbe_heal_3->setFont(font7);
        lbe_heal_3->setStyleSheet(QStringLiteral(""));
        lbe_heal_3->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(lbe_heal_3);


        gridLayout->addWidget(widget_11, 4, 2, 1, 1);

        widget_3 = new QWidget(Dialog);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setStyleSheet(QLatin1String("background-color: rgb(243, 246, 248);\n"
""));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setSpacing(1);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font3);
        label_5->setStyleSheet(QStringLiteral("color: rgb(79, 79, 79);"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_5);

        lbe_add_dead = new QLabel(widget_3);
        lbe_add_dead->setObjectName(QStringLiteral("lbe_add_dead"));
        lbe_add_dead->setFont(font7);
        lbe_add_dead->setStyleSheet(QStringLiteral("color: rgb(102, 102, 108);"));

        horizontalLayout_5->addWidget(lbe_add_dead);


        verticalLayout_3->addLayout(horizontalLayout_5);

        lbe_total_dead = new QLabel(widget_3);
        lbe_total_dead->setObjectName(QStringLiteral("lbe_total_dead"));
        lbe_total_dead->setFont(font8);
        lbe_total_dead->setStyleSheet(QStringLiteral("color: rgb(102, 102, 108);"));
        lbe_total_dead->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lbe_total_dead);

        lbe_dead = new QLabel(widget_3);
        lbe_dead->setObjectName(QStringLiteral("lbe_dead"));
        lbe_dead->setFont(font7);
        lbe_dead->setStyleSheet(QStringLiteral(""));
        lbe_dead->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lbe_dead);


        gridLayout->addWidget(widget_3, 1, 2, 1, 1);

        widget_12 = new QWidget(Dialog);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        widget_12->setStyleSheet(QLatin1String("background-color: rgb(243, 246, 248);\n"
"border-top-right-radius:10px;\n"
"border-bottom-right-radius:10px"));
        verticalLayout_17 = new QVBoxLayout(widget_12);
        verticalLayout_17->setSpacing(1);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_19 = new QLabel(widget_12);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font3);
        label_19->setStyleSheet(QStringLiteral("color: rgb(79, 79, 79);"));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_19->addWidget(label_19);

        lbe_global_deadAdd = new QLabel(widget_12);
        lbe_global_deadAdd->setObjectName(QStringLiteral("lbe_global_deadAdd"));
        lbe_global_deadAdd->setFont(font7);
        lbe_global_deadAdd->setStyleSheet(QStringLiteral("color: rgb(102, 102, 108);"));

        horizontalLayout_19->addWidget(lbe_global_deadAdd);


        verticalLayout_17->addLayout(horizontalLayout_19);

        lbe_global_dead = new QLabel(widget_12);
        lbe_global_dead->setObjectName(QStringLiteral("lbe_global_dead"));
        lbe_global_dead->setFont(font8);
        lbe_global_dead->setStyleSheet(QStringLiteral("color: rgb(102, 102, 108);"));
        lbe_global_dead->setAlignment(Qt::AlignCenter);

        verticalLayout_17->addWidget(lbe_global_dead);

        lbe_dead_2 = new QLabel(widget_12);
        lbe_dead_2->setObjectName(QStringLiteral("lbe_dead_2"));
        lbe_dead_2->setFont(font7);
        lbe_dead_2->setStyleSheet(QStringLiteral(""));
        lbe_dead_2->setAlignment(Qt::AlignCenter);

        verticalLayout_17->addWidget(lbe_dead_2);


        gridLayout->addWidget(widget_12, 4, 3, 1, 1);

        widget_10 = new QWidget(Dialog);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        sizePolicy1.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy1);
        widget_10->setStyleSheet(QLatin1String("background-color: rgb(253,241,241);\n"
"border-top-left-radius:10px;"));
        verticalLayout_14 = new QVBoxLayout(widget_10);
        verticalLayout_14->setSpacing(1);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_17 = new QLabel(widget_10);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font3);
        label_17->setStyleSheet(QStringLiteral("color: rgb(79, 79, 79);"));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_17->addWidget(label_17);

        lbe_global_confirmAdd = new QLabel(widget_10);
        lbe_global_confirmAdd->setObjectName(QStringLiteral("lbe_global_confirmAdd"));
        lbe_global_confirmAdd->setFont(font7);
        lbe_global_confirmAdd->setStyleSheet(QStringLiteral("color: rgb(204,30,30);"));

        horizontalLayout_17->addWidget(lbe_global_confirmAdd);


        verticalLayout_14->addLayout(horizontalLayout_17);

        lbe_global_confirm = new QLabel(widget_10);
        lbe_global_confirm->setObjectName(QStringLiteral("lbe_global_confirm"));
        lbe_global_confirm->setFont(font9);
        lbe_global_confirm->setLayoutDirection(Qt::LeftToRight);
        lbe_global_confirm->setStyleSheet(QStringLiteral("color: rgb(204,30,30);"));
        lbe_global_confirm->setLineWidth(1);
        lbe_global_confirm->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(lbe_global_confirm);

        lbe_confirm_6 = new QLabel(widget_10);
        lbe_confirm_6->setObjectName(QStringLiteral("lbe_confirm_6"));
        lbe_confirm_6->setFont(font7);
        lbe_confirm_6->setStyleSheet(QStringLiteral(""));
        lbe_confirm_6->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(lbe_confirm_6);


        gridLayout->addWidget(widget_10, 4, 1, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_china = new QLabel(Dialog);
        label_china->setObjectName(QStringLiteral("label_china"));
        label_china->setFont(font6);
        label_china->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_china);

        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font6);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_4);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_7);


        gridLayout->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_global = new QLabel(Dialog);
        label_global->setObjectName(QStringLiteral("label_global"));
        label_global->setFont(font6);
        label_global->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(label_global);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font6);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(label_3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_8);


        gridLayout->addLayout(horizontalLayout_14, 3, 0, 1, 1);

        lbe_hostinfo_2 = new QLabel(Dialog);
        lbe_hostinfo_2->setObjectName(QStringLiteral("lbe_hostinfo_2"));
        lbe_hostinfo_2->setFont(font5);
        lbe_hostinfo_2->setStyleSheet(QStringLiteral(""));
        lbe_hostinfo_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(lbe_hostinfo_2, 0, 1, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 6);
        gridLayout->setRowStretch(2, 6);
        gridLayout->setRowStretch(3, 1);
        gridLayout->setRowStretch(4, 6);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);
        gridLayout->setColumnStretch(3, 1);

        verticalLayout_9->addLayout(gridLayout);

        verticalLayout_9->setStretch(0, 3);
        verticalLayout_9->setStretch(1, 10);

        horizontalLayout_20->addLayout(verticalLayout_9);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_news = new QLabel(Dialog);
        label_news->setObjectName(QStringLiteral("label_news"));
        label_news->setFont(font6);
        label_news->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_news);

        label_30 = new QLabel(Dialog);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setFont(font7);
        label_30->setStyleSheet(QStringLiteral(""));
        label_30->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_30);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_7->addLayout(horizontalLayout_3);

        tb_news = new QTextBrowser(Dialog);
        tb_news->setObjectName(QStringLiteral("tb_news"));
        QFont font10;
        font10.setFamily(QStringLiteral("Microsoft YaHei"));
        font10.setPointSize(12);
        tb_news->setFont(font10);
        tb_news->setStyleSheet(QStringLiteral(""));

        verticalLayout_7->addWidget(tb_news);


        horizontalLayout_20->addLayout(verticalLayout_7);

        horizontalLayout_20->setStretch(0, 6);
        horizontalLayout_20->setStretch(1, 5);

        verticalLayout_16->addLayout(horizontalLayout_20);

        verticalLayout_16->setStretch(0, 1);
        verticalLayout_16->setStretch(1, 25);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        btn_close->setText(QApplication::translate("Dialog", "close", Q_NULLPTR));
        btn_min->setText(QApplication::translate("Dialog", "min", Q_NULLPTR));
        btn_max->setText(QApplication::translate("Dialog", "max", Q_NULLPTR));
        btn_update->setText(QApplication::translate("Dialog", "update", Q_NULLPTR));
        btn_about->setText(QApplication::translate("Dialog", "about", Q_NULLPTR));
        lbe_clk->setText(QApplication::translate("Dialog", "clk", Q_NULLPTR));
        btn_msg->setText(QApplication::translate("Dialog", "ble", Q_NULLPTR));
        btn_ble->setText(QApplication::translate("Dialog", "ble", Q_NULLPTR));
        btn_vol->setText(QApplication::translate("Dialog", "vol", Q_NULLPTR));
        btn_wifi->setText(QApplication::translate("Dialog", "wifi", Q_NULLPTR));
        btn_battery->setText(QApplication::translate("Dialog", "bat", Q_NULLPTR));
        lbe_pic->setText(QApplication::translate("Dialog", "<html><head/><body><p><a href=\"http://www.cnblog.com/fron_csl\"><span style=\" text-decoration: underline; color:#0000ff;\"/></a></p></body></html>", Q_NULLPTR));
        label_11->setText(QApplication::translate("Dialog", "\346\233\264\346\226\260\344\272\216", Q_NULLPTR));
        lbe_update_time->setText(QApplication::translate("Dialog", "16:56:23", Q_NULLPTR));
        btn_autoUpdate->setText(QApplication::translate("Dialog", "update", Q_NULLPTR));
        label_ip->setText(QApplication::translate("Dialog", "IP", Q_NULLPTR));
        label_city->setText(QApplication::translate("Dialog", "C", Q_NULLPTR));
        label_query->setText(QApplication::translate("Dialog", "114.246.34.131", Q_NULLPTR));
        label_ok->setText(QApplication::translate("Dialog", "ok", Q_NULLPTR));
        lbe_success->setText(QApplication::translate("Dialog", "0", Q_NULLPTR));
        label_err->setText(QApplication::translate("Dialog", "err", Q_NULLPTR));
        lbe_error->setText(QApplication::translate("Dialog", "0", Q_NULLPTR));
        label_12->setText(QApplication::translate("Dialog", "\350\276\203\346\230\250\346\227\245", Q_NULLPTR));
        lbe_add_nowSevere->setText(QApplication::translate("Dialog", "+123", Q_NULLPTR));
        lbe_total_nowSevere->setText(QApplication::translate("Dialog", "00000", Q_NULLPTR));
        lbe_heal_2->setText(QApplication::translate("Dialog", "\347\216\260\346\234\211\351\207\215\347\227\207", Q_NULLPTR));
        label_16->setText(QApplication::translate("Dialog", "\350\276\203\346\230\250\346\227\245", Q_NULLPTR));
        lbe_global_nowConfirmAdd->setText(QApplication::translate("Dialog", "+123", Q_NULLPTR));
        lbe_global_nowConfirm->setText(QApplication::translate("Dialog", "00000", Q_NULLPTR));
        lbe_confirm_5->setText(QApplication::translate("Dialog", "\347\216\260\346\234\211\347\241\256\350\257\212", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog", "\350\276\203\346\230\250\346\227\245", Q_NULLPTR));
        lbe_add_suspect->setText(QApplication::translate("Dialog", "+123", Q_NULLPTR));
        lbe_total_suspect->setText(QApplication::translate("Dialog", "00000", Q_NULLPTR));
        lbe_suspect->setText(QApplication::translate("Dialog", "\347\216\260\346\234\211\347\226\221\344\274\274", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog", "\350\276\203\346\230\250\346\227\245", Q_NULLPTR));
        lbe_add_heal->setText(QApplication::translate("Dialog", "+123", Q_NULLPTR));
        lbe_total_heal->setText(QApplication::translate("Dialog", "00000", Q_NULLPTR));
        lbe_heal->setText(QApplication::translate("Dialog", "\347\264\257\350\256\241\346\262\273\346\204\210", Q_NULLPTR));
        label_8->setText(QApplication::translate("Dialog", "\350\276\203\346\230\250\346\227\245", Q_NULLPTR));
        lbe_zero_add->setText(QApplication::translate("Dialog", "\345\276\205\345\205\254\345\270\203", Q_NULLPTR));
        lbe_zeroCity->setText(QApplication::translate("Dialog", "00000", Q_NULLPTR));
        lbe_zeroCity_3->setText(QApplication::translate("Dialog", "\351\233\266\347\227\205\344\276\213\345\237\216\345\270\202", Q_NULLPTR));
        label_9->setText(QApplication::translate("Dialog", "\350\276\203\346\230\250\346\227\245", Q_NULLPTR));
        lbe_add_confirm->setText(QApplication::translate("Dialog", "+123", Q_NULLPTR));
        lbe_total_confirm->setText(QApplication::translate("Dialog", "00000", Q_NULLPTR));
        lbe_confirm_2->setText(QApplication::translate("Dialog", "\347\264\257\350\256\241\347\241\256\350\257\212", Q_NULLPTR));
        label_10->setText(QApplication::translate("Dialog", "\350\276\203\346\230\250\346\227\245", Q_NULLPTR));
        lbe_add_nowConfirm->setText(QApplication::translate("Dialog", "+123", Q_NULLPTR));
        lbe_total_nowConfirm->setText(QApplication::translate("Dialog", "00000", Q_NULLPTR));
        lbe_confirm_3->setText(QApplication::translate("Dialog", "\347\216\260\346\234\211\347\241\256\350\257\212", Q_NULLPTR));
        label_15->setText(QApplication::translate("Dialog", "\350\276\203\346\230\250\346\227\245", Q_NULLPTR));
        lbe_notzero_add->setText(QApplication::translate("Dialog", "\345\276\205\345\205\254\345\270\203", Q_NULLPTR));
        lbe_notzeroCity->setText(QApplication::translate("Dialog", "00000", Q_NULLPTR));
        lbe_notezeroCity_3->setText(QApplication::translate("Dialog", "\346\234\211\347\227\205\344\276\213\345\237\216\345\270\202", Q_NULLPTR));
        label_18->setText(QApplication::translate("Dialog", "\350\276\203\346\230\250\346\227\245", Q_NULLPTR));
        lbe_global_healAdd->setText(QApplication::translate("Dialog", "+123", Q_NULLPTR));
        lbe_global_heal->setText(QApplication::translate("Dialog", "00000", Q_NULLPTR));
        lbe_heal_3->setText(QApplication::translate("Dialog", "\347\264\257\350\256\241\346\262\273\346\204\210", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog", "\350\276\203\346\230\250\346\227\245", Q_NULLPTR));
        lbe_add_dead->setText(QApplication::translate("Dialog", "+123", Q_NULLPTR));
        lbe_total_dead->setText(QApplication::translate("Dialog", "00000", Q_NULLPTR));
        lbe_dead->setText(QApplication::translate("Dialog", "\347\264\257\350\256\241\346\255\273\344\272\241", Q_NULLPTR));
        label_19->setText(QApplication::translate("Dialog", "\350\276\203\346\230\250\346\227\245", Q_NULLPTR));
        lbe_global_deadAdd->setText(QApplication::translate("Dialog", "+123", Q_NULLPTR));
        lbe_global_dead->setText(QApplication::translate("Dialog", "00000", Q_NULLPTR));
        lbe_dead_2->setText(QApplication::translate("Dialog", "\347\264\257\350\256\241\346\255\273\344\272\241", Q_NULLPTR));
        label_17->setText(QApplication::translate("Dialog", "\350\276\203\346\230\250\346\227\245", Q_NULLPTR));
        lbe_global_confirmAdd->setText(QApplication::translate("Dialog", "+123", Q_NULLPTR));
        lbe_global_confirm->setText(QApplication::translate("Dialog", "00000", Q_NULLPTR));
        lbe_confirm_6->setText(QApplication::translate("Dialog", "\347\264\257\350\256\241\347\241\256\350\257\212", Q_NULLPTR));
        label_china->setText(QApplication::translate("Dialog", "C", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog", "\345\233\275\345\206\205\347\226\253\346\203\205", Q_NULLPTR));
        label_global->setText(QApplication::translate("Dialog", "G", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "\346\265\267\345\244\226\347\226\253\346\203\205", Q_NULLPTR));
        lbe_hostinfo_2->setText(QApplication::translate("Dialog", "192.168.1.111", Q_NULLPTR));
        label_news->setText(QApplication::translate("Dialog", "N", Q_NULLPTR));
        label_30->setText(QApplication::translate("Dialog", "\346\234\200\346\226\260\345\212\250\346\200\201", Q_NULLPTR));
        tb_news->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
