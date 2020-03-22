#include <dialog.h>
#include "ui_dialog.h"

//forexamle:192.168.1.111
QString Dialog::GetLocalmachineIP()
{
    QString ipAddress;
    QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
//    qDebug() << ipAddressesList.at(0);
//    qDebug() << ipAddressesList.at(1);
//    qDebug() << ipAddressesList.at(2);
//    qDebug() << ipAddressesList.at(3);

    for(QHostAddress &addr : ipAddressesList)
    {
        // 找到不是本地ip，并且是ipv4协议，并且不是169开头的第一个地址
        if(addr != QHostAddress::LocalHost && addr.protocol() == QAbstractSocket::IPv4Protocol && !addr.toString().startsWith("169"))
        {
            ipAddress = addr.toString();
            break;
        }
    }
    // if we did not find one, use IPv4 localhost
    if (ipAddress.isEmpty())
        ipAddress = QHostAddress(QHostAddress::LocalHost).toString();
    return ipAddress;
}


bool Dialog::isNetWorkOnline()
{
    QNetworkConfigurationManager mgr;
    return mgr.isOnline();
}
