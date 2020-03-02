/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLabel *lbe_add_suspect;
    QLabel *lbe_total_suspect;
    QLabel *lbe_suspect;
    QPushButton *btn_about;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLabel *lbe_add_heal;
    QLabel *lbe_total_heal;
    QLabel *lbe_heal;
    QPushButton *btn_close;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_10;
    QLabel *lbe_add_nowConfirm;
    QLabel *lbe_total_nowConfirm;
    QLabel *lbe_confirm_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLabel *lbe_add_confirm;
    QLabel *lbe_total_confirm;
    QLabel *lbe_confirm_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *lbe_add_dead;
    QLabel *lbe_total_dead;
    QLabel *lbe_dead;
    QPushButton *btn_update;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_11;
    QLabel *lbe_update_time;
    QSpacerItem *horizontalSpacer;
    QLabel *lbe_info;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_12;
    QLabel *lbe_add_nowSevere;
    QLabel *lbe_total_nowSevere;
    QLabel *lbe_heal_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(480, 319);
        horizontalLayout_3 = new QHBoxLayout(Dialog);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(1, 1, 2, 2);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_6 = new QWidget(Dialog);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 245, 233);"));
        verticalLayout_6 = new QVBoxLayout(widget_6);
        verticalLayout_6->setSpacing(1);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(14);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(79, 79, 79);"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_6);

        lbe_add_suspect = new QLabel(widget_6);
        lbe_add_suspect->setObjectName(QString::fromUtf8("lbe_add_suspect"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(15);
        lbe_add_suspect->setFont(font1);
        lbe_add_suspect->setStyleSheet(QString::fromUtf8("color: rgb(255, 150, 30);"));

        horizontalLayout_7->addWidget(lbe_add_suspect);


        verticalLayout_6->addLayout(horizontalLayout_7);

        lbe_total_suspect = new QLabel(widget_6);
        lbe_total_suspect->setObjectName(QString::fromUtf8("lbe_total_suspect"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbe_total_suspect->sizePolicy().hasHeightForWidth());
        lbe_total_suspect->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setWeight(75);
        lbe_total_suspect->setFont(font2);
        lbe_total_suspect->setStyleSheet(QString::fromUtf8("color: rgb(255, 150, 30);\n"
""));
        lbe_total_suspect->setTextFormat(Qt::AutoText);
        lbe_total_suspect->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(lbe_total_suspect);

        lbe_suspect = new QLabel(widget_6);
        lbe_suspect->setObjectName(QString::fromUtf8("lbe_suspect"));
        lbe_suspect->setFont(font1);
        lbe_suspect->setStyleSheet(QString::fromUtf8(""));
        lbe_suspect->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(lbe_suspect);


        gridLayout->addWidget(widget_6, 2, 1, 1, 1);

        btn_about = new QPushButton(Dialog);
        btn_about->setObjectName(QString::fromUtf8("btn_about"));
        QFont font3;
        font3.setPointSize(12);
        btn_about->setFont(font3);

        gridLayout->addWidget(btn_about, 3, 1, 1, 1);

        widget_2 = new QWidget(Dialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(241, 248, 244);"));
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setSpacing(1);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(79, 79, 79);"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_7);

        lbe_add_heal = new QLabel(widget_2);
        lbe_add_heal->setObjectName(QString::fromUtf8("lbe_add_heal"));
        lbe_add_heal->setFont(font1);
        lbe_add_heal->setStyleSheet(QString::fromUtf8("color: rgb(23, 139, 80);"));

        horizontalLayout_6->addWidget(lbe_add_heal);


        verticalLayout_4->addLayout(horizontalLayout_6);

        lbe_total_heal = new QLabel(widget_2);
        lbe_total_heal->setObjectName(QString::fromUtf8("lbe_total_heal"));
        lbe_total_heal->setFont(font2);
        lbe_total_heal->setStyleSheet(QString::fromUtf8("color: rgb(23, 139, 80);"));
        lbe_total_heal->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lbe_total_heal);

        lbe_heal = new QLabel(widget_2);
        lbe_heal->setObjectName(QString::fromUtf8("lbe_heal"));
        lbe_heal->setFont(font1);
        lbe_heal->setStyleSheet(QString::fromUtf8(""));
        lbe_heal->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lbe_heal);


        gridLayout->addWidget(widget_2, 1, 1, 1, 1);

        btn_close = new QPushButton(Dialog);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setFont(font3);
        btn_close->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btn_close, 3, 2, 1, 1);

        widget_4 = new QWidget(Dialog);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(253, 241, 241);\n"
"border-bottom-left-radius:10px\n"
""));
        verticalLayout_11 = new QVBoxLayout(widget_4);
        verticalLayout_11->setSpacing(1);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_10 = new QLabel(widget_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(79, 79, 79);"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(label_10);

        lbe_add_nowConfirm = new QLabel(widget_4);
        lbe_add_nowConfirm->setObjectName(QString::fromUtf8("lbe_add_nowConfirm"));
        lbe_add_nowConfirm->setFont(font1);
        lbe_add_nowConfirm->setStyleSheet(QString::fromUtf8("color: rgb(245, 82, 83);"));

        horizontalLayout_15->addWidget(lbe_add_nowConfirm);


        verticalLayout_11->addLayout(horizontalLayout_15);

        lbe_total_nowConfirm = new QLabel(widget_4);
        lbe_total_nowConfirm->setObjectName(QString::fromUtf8("lbe_total_nowConfirm"));
        lbe_total_nowConfirm->setFont(font2);
        lbe_total_nowConfirm->setLayoutDirection(Qt::LeftToRight);
        lbe_total_nowConfirm->setStyleSheet(QString::fromUtf8("color: rgb(245, 82, 83);"));
        lbe_total_nowConfirm->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(lbe_total_nowConfirm);

        lbe_confirm_3 = new QLabel(widget_4);
        lbe_confirm_3->setObjectName(QString::fromUtf8("lbe_confirm_3"));
        lbe_confirm_3->setFont(font1);
        lbe_confirm_3->setStyleSheet(QString::fromUtf8(""));
        lbe_confirm_3->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(lbe_confirm_3);


        gridLayout->addWidget(widget_4, 2, 0, 1, 1);

        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(253,241,241);\n"
"border-top-left-radius:10px;"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(79, 79, 79);"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_9);

        lbe_add_confirm = new QLabel(widget);
        lbe_add_confirm->setObjectName(QString::fromUtf8("lbe_add_confirm"));
        lbe_add_confirm->setFont(font1);
        lbe_add_confirm->setStyleSheet(QString::fromUtf8("color: rgb(204,30,30);"));

        horizontalLayout_4->addWidget(lbe_add_confirm);


        verticalLayout_2->addLayout(horizontalLayout_4);

        lbe_total_confirm = new QLabel(widget);
        lbe_total_confirm->setObjectName(QString::fromUtf8("lbe_total_confirm"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font4.setPointSize(25);
        font4.setBold(true);
        font4.setWeight(75);
        font4.setStyleStrategy(QFont::PreferDefault);
        lbe_total_confirm->setFont(font4);
        lbe_total_confirm->setLayoutDirection(Qt::LeftToRight);
        lbe_total_confirm->setStyleSheet(QString::fromUtf8("color: rgb(204,30,30);"));
        lbe_total_confirm->setLineWidth(1);
        lbe_total_confirm->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbe_total_confirm);

        lbe_confirm_2 = new QLabel(widget);
        lbe_confirm_2->setObjectName(QString::fromUtf8("lbe_confirm_2"));
        lbe_confirm_2->setFont(font1);
        lbe_confirm_2->setStyleSheet(QString::fromUtf8(""));
        lbe_confirm_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbe_confirm_2);


        gridLayout->addWidget(widget, 1, 0, 1, 1);

        widget_3 = new QWidget(Dialog);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 246, 248);\n"
"border-top-right-radius:10px"));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setSpacing(1);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(79, 79, 79);"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_5);

        lbe_add_dead = new QLabel(widget_3);
        lbe_add_dead->setObjectName(QString::fromUtf8("lbe_add_dead"));
        lbe_add_dead->setFont(font1);
        lbe_add_dead->setStyleSheet(QString::fromUtf8("color: rgb(102, 102, 108);"));

        horizontalLayout_5->addWidget(lbe_add_dead);


        verticalLayout_3->addLayout(horizontalLayout_5);

        lbe_total_dead = new QLabel(widget_3);
        lbe_total_dead->setObjectName(QString::fromUtf8("lbe_total_dead"));
        lbe_total_dead->setFont(font2);
        lbe_total_dead->setStyleSheet(QString::fromUtf8("color: rgb(102, 102, 108);"));
        lbe_total_dead->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lbe_total_dead);

        lbe_dead = new QLabel(widget_3);
        lbe_dead->setObjectName(QString::fromUtf8("lbe_dead"));
        lbe_dead->setFont(font1);
        lbe_dead->setStyleSheet(QString::fromUtf8(""));
        lbe_dead->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lbe_dead);


        gridLayout->addWidget(widget_3, 1, 2, 1, 1);

        btn_update = new QPushButton(Dialog);
        btn_update->setObjectName(QString::fromUtf8("btn_update"));
        btn_update->setFont(font3);

        gridLayout->addWidget(btn_update, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_11 = new QLabel(Dialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font5.setPointSize(12);
        font5.setBold(false);
        font5.setWeight(50);
        label_11->setFont(font5);
        label_11->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(label_11);

        lbe_update_time = new QLabel(Dialog);
        lbe_update_time->setObjectName(QString::fromUtf8("lbe_update_time"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font6.setPointSize(12);
        lbe_update_time->setFont(font6);

        horizontalLayout_2->addWidget(lbe_update_time);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        lbe_info = new QLabel(Dialog);
        lbe_info->setObjectName(QString::fromUtf8("lbe_info"));
        lbe_info->setFont(font5);
        lbe_info->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(lbe_info);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 3);

        widget_5 = new QWidget(Dialog);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 242, 246);\n"
"border-bottom-right-radius:10px"));
        verticalLayout_5 = new QVBoxLayout(widget_5);
        verticalLayout_5->setSpacing(1);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(1, 1, 1, 1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_12 = new QLabel(widget_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(79, 79, 79);"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_12);

        lbe_add_nowSevere = new QLabel(widget_5);
        lbe_add_nowSevere->setObjectName(QString::fromUtf8("lbe_add_nowSevere"));
        lbe_add_nowSevere->setFont(font1);
        lbe_add_nowSevere->setStyleSheet(QString::fromUtf8("color: rgb(202,63,129);"));

        horizontalLayout->addWidget(lbe_add_nowSevere);


        verticalLayout_5->addLayout(horizontalLayout);

        lbe_total_nowSevere = new QLabel(widget_5);
        lbe_total_nowSevere->setObjectName(QString::fromUtf8("lbe_total_nowSevere"));
        lbe_total_nowSevere->setFont(font2);
        lbe_total_nowSevere->setStyleSheet(QString::fromUtf8("color: rgb(202,63,129);"));
        lbe_total_nowSevere->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lbe_total_nowSevere);

        lbe_heal_2 = new QLabel(widget_5);
        lbe_heal_2->setObjectName(QString::fromUtf8("lbe_heal_2"));
        lbe_heal_2->setFont(font1);
        lbe_heal_2->setStyleSheet(QString::fromUtf8(""));
        lbe_heal_2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lbe_heal_2);


        gridLayout->addWidget(widget_5, 2, 2, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 3);
        gridLayout->setRowStretch(2, 3);
        gridLayout->setRowStretch(3, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);

        horizontalLayout_3->addLayout(gridLayout);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dialog", "\350\276\203\346\230\250\346\227\245", 0, QApplication::UnicodeUTF8));
        lbe_add_suspect->setText(QApplication::translate("Dialog", "+123", 0, QApplication::UnicodeUTF8));
        lbe_total_suspect->setText(QApplication::translate("Dialog", "00000", 0, QApplication::UnicodeUTF8));
        lbe_suspect->setText(QApplication::translate("Dialog", "\347\216\260\346\234\211\347\226\221\344\274\274", 0, QApplication::UnicodeUTF8));
        btn_about->setText(QApplication::translate("Dialog", "About", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Dialog", "\350\276\203\346\230\250\346\227\245", 0, QApplication::UnicodeUTF8));
        lbe_add_heal->setText(QApplication::translate("Dialog", "+123", 0, QApplication::UnicodeUTF8));
        lbe_total_heal->setText(QApplication::translate("Dialog", "00000", 0, QApplication::UnicodeUTF8));
        lbe_heal->setText(QApplication::translate("Dialog", "\347\264\257\350\256\241\346\262\273\346\204\210", 0, QApplication::UnicodeUTF8));
        btn_close->setText(QApplication::translate("Dialog", "Close", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Dialog", "\350\276\203\346\230\250\346\227\245", 0, QApplication::UnicodeUTF8));
        lbe_add_nowConfirm->setText(QApplication::translate("Dialog", "+123", 0, QApplication::UnicodeUTF8));
        lbe_total_nowConfirm->setText(QApplication::translate("Dialog", "00000", 0, QApplication::UnicodeUTF8));
        lbe_confirm_3->setText(QApplication::translate("Dialog", "\347\216\260\346\234\211\347\241\256\350\257\212", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Dialog", "\350\276\203\346\230\250\346\227\245", 0, QApplication::UnicodeUTF8));
        lbe_add_confirm->setText(QApplication::translate("Dialog", "+123", 0, QApplication::UnicodeUTF8));
        lbe_total_confirm->setText(QApplication::translate("Dialog", "00000", 0, QApplication::UnicodeUTF8));
        lbe_confirm_2->setText(QApplication::translate("Dialog", "\347\264\257\350\256\241\347\241\256\350\257\212", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Dialog", "\350\276\203\346\230\250\346\227\245", 0, QApplication::UnicodeUTF8));
        lbe_add_dead->setText(QApplication::translate("Dialog", "+123", 0, QApplication::UnicodeUTF8));
        lbe_total_dead->setText(QApplication::translate("Dialog", "00000", 0, QApplication::UnicodeUTF8));
        lbe_dead->setText(QApplication::translate("Dialog", "\347\264\257\350\256\241\346\255\273\344\272\241", 0, QApplication::UnicodeUTF8));
        btn_update->setText(QApplication::translate("Dialog", "Update", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Dialog", "\346\233\264\346\226\260\344\272\216", 0, QApplication::UnicodeUTF8));
        lbe_update_time->setText(QApplication::translate("Dialog", "2020-02-05 16:56:23", 0, QApplication::UnicodeUTF8));
        lbe_info->setText(QApplication::translate("Dialog", "\347\212\266\346\200\201\346\255\243\345\270\270", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Dialog", "\350\276\203\346\230\250\346\227\245", 0, QApplication::UnicodeUTF8));
        lbe_add_nowSevere->setText(QApplication::translate("Dialog", "+123", 0, QApplication::UnicodeUTF8));
        lbe_total_nowSevere->setText(QApplication::translate("Dialog", "00000", 0, QApplication::UnicodeUTF8));
        lbe_heal_2->setText(QApplication::translate("Dialog", "\347\216\260\346\234\211\351\207\215\347\227\207", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
