#include "about.h"
#include "ui_about.h"
//#include "windows.h"
#include <QDesktopServices>
#include <QDesktopWidget>
#include <QDebug>

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);

    this->setWindowTitle("about");
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    setLocation();

    ui->tb_about->setOpenLinks(false);
    connect(ui->tb_about, SIGNAL(anchorClicked(const QUrl&)), this, SLOT(anchorClickedSlot(const QUrl&)));
}

about::~about()
{
    delete ui;
}
void about::anchorClickedSlot(const QUrl& url)
{
    QDesktopServices::openUrl(url);
//    ShellExecuteA(NULL, "open", url.toString().toStdString().c_str(), "", "", SW_SHOW);
}

void about::setLocation()
{
    const QRect availableSize = QApplication::desktop()->availableGeometry(this);

    qint32 DESKTOP_QT4 = 264199;
    qint32 DESKTOP_QT5 = 329728;
    qint32 ARM_IMX287  = 263939;
    qint32 ARM_YA157C  = 264199;

    //output current qt version id
    qDebug() << QT_VERSION;

    //output current screen resolution ratio
    qint16 width  = availableSize.width();
    qint16 height = availableSize.height();
    qDebug() << "width: " << width << "height:" << height;

//    if(QT_VERSION == ARM_IMX287)
//        this->resize(width-5, height-15);
//    else
    if(QT_VERSION == ARM_IMX287)
        this->resize(width/2, height);

    qint16 loc_width = this->width();
    qint16 loc_height = this->height();
    qint16 loc_x = (width - loc_width) / 2;
    qint16 loc_y = (height - loc_height) / 2;
    qDebug() << "locx:" << loc_x << "locy" << loc_y;

//    if(QT_VERSION == ARM_IMX287)
//        this->move(0, 0);
//    else
    if(QT_VERSION == ARM_IMX287)
        this->move(loc_x, loc_y);
}
