#include "dialog.h"
#include "ui_dialog.h"

#include "cJSON.h"

void Dialog::parseData(QString filename)
{
    QFile file(filename);

    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "file open failed";
        return;
    }
    QByteArray str = file.readAll();
    file.close();
    file.remove();            //删除文件

    switch(apiID)
    {
    case 0:
        parseApi_0(str);
        apiID = 1;
        emit on_btn_update_clicked();
        break;

    case 1:
        parseApi_1(str);
        apiID = 2;
        emit on_btn_update_clicked();
        break;
    case 2:
        parseApi_2(str);
        if(QT_VERSION != 330498)
        {
            apiID = 3;
            emit on_btn_update_clicked();
        }
        else
            apiID = 1;
        break;
    case 3:
        parseApi_3(str);
        apiID = 1;
        break;
    default:
        break;
    }
}

void Dialog::parseApi_0(QByteArray str)
{
    //    qDebug() << str;

    cJSON *root_obj;
    root_obj = cJSON_Parse(str);

    if(!root_obj)
    {
        qDebug() << "ip api error";
    }
    else
    {
        QString status = cJSON_GetObjectItem(root_obj, "status")->valuestring;
        qDebug() << status;
        if(status == "success")
        {
            QString city = cJSON_GetObjectItem(root_obj, "city")->valuestring;
            QString query = cJSON_GetObjectItem(root_obj, "query")->valuestring;
            ui->label_city->setText(city);
            ui->label_query->setText(query);

            //            qDebug() << city << query;
            qDebug() << "get ip addr ok";
        }
    }
    cJSON_Delete(root_obj);
}

void Dialog::parseApi_1(QByteArray str)
{
    cJSON *ret_obj;
    cJSON *root_obj;
    //    qDebug() << str;
    root_obj = cJSON_Parse(str);   //创建JSON解析对象，返回JSON格式是否正确
    if (!root_obj)
    {
        qDebug() << "json1 format error";
        return;
    }
    else
    {
        qDebug() << "json1 format ok";

        ret_obj = cJSON_GetObjectItem(root_obj, "ret");
        if(cJSON_IsNumber(ret_obj))
        {
            int ret = 1;
            ret = ret_obj->valueint;        //0
        }

        char *data_str = cJSON_GetObjectItem(root_obj, "data")->valuestring;
        cJSON *data_obj = cJSON_Parse(data_str);
        if(!data_obj)
        {
            qDebug() << "data1 json err";
            cnt_error++;
            QString error = QString::number(cnt_error);
            ui->lbe_error->setText(error);
            return;
        }
        else
        {
            qDebug() << "data1 json ok";
            QString lastUpdateTime = cJSON_GetObjectItem(data_obj, "lastUpdateTime")->valuestring;
            //            qDebug() << lastUpdateTime;
            ui->lbe_update_time->setText(lastUpdateTime.mid(11, 8));

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
            //            int chinaAdd_suspect    = cJSON_GetObjectItem(chinaAdd_obj, "suspect")->valueint;
            int chinaAdd_nowSevere  = cJSON_GetObjectItem(chinaAdd_obj, "nowSevere")->valueint;

            lbeDisplay(ui->lbe_add_confirm, chinaAdd_confirm);
            lbeDisplay(ui->lbe_add_heal, chinaAdd_heal);
            lbeDisplay(ui->lbe_add_dead, chinaAdd_dead);
            lbeDisplay(ui->lbe_add_nowConfirm, chinaAdd_nowConfirm);
            //            lbeDisplay(ui->lbe_add_suspect, chinaAdd_suspect);
            lbeDisplay(ui->lbe_add_nowSevere, chinaAdd_nowSevere);
        }
        cJSON_Delete(root_obj);//释放内存
        cnt_success++;
        QString success = QString::number(cnt_success);
        ui->lbe_success->setText(success);
        qDebug() << "数据更新完成";
    }
}
void Dialog::parseApi_2(QByteArray str)
{
    cJSON *ret_obj;
    cJSON *root_obj;
    root_obj = cJSON_Parse(str);   //创建JSON解析对象，返回JSON格式是否正确
    if (!root_obj)
    {
        qDebug() << "json2 format error";
    }
    else
    {
        qDebug() << "json2 format ok";

        ret_obj = cJSON_GetObjectItem(root_obj, "ret");
        if(cJSON_IsNumber(ret_obj))
        {
            int ret = 1;
            ret = ret_obj->valueint;        //0
        }

        char *data_str = cJSON_GetObjectItem(root_obj, "data")->valuestring;
        cJSON *data_obj = cJSON_Parse(data_str);
        if(!data_obj)
        {
            qDebug() << "data2 json err";
            return;
        }
        else
        {
            qDebug() << "data2 json ok";
            //history data
            cJSON *chinaDayList_arr = cJSON_GetObjectItem(data_obj, "chinaDayList");
            getChinaDayListData(chinaDayList_arr);

            cJSON *chinaDayAdd_arr = cJSON_GetObjectItem(data_obj, "chinaDayAddList");
            getChinaDayAddListData(chinaDayAdd_arr);

            cJSON *article_arr = cJSON_GetObjectItem(data_obj, "articleList");
            getArticelData(article_arr);

            cJSON *cityStatis_obj = cJSON_GetObjectItem(data_obj, "cityStatis");
            getCityStatis(cityStatis_obj);
        }
        qDebug() << "最新动态更新完成";
        cJSON_Delete(root_obj);//释放内存
    }
}

void Dialog::parseApi_3(QByteArray str)
{
    cJSON *ret_obj;
    cJSON *root_obj;
    root_obj = cJSON_Parse(str);   //创建JSON解析对象，返回JSON格式是否正确
    if (!root_obj)
    {
        qDebug() << "json3 format error";
    }
    else
    {
        qDebug() << "json3 format ok";

        ret_obj = cJSON_GetObjectItem(root_obj, "ret");
        if(cJSON_IsNumber(ret_obj))
        {
            int ret = 1;
            ret = ret_obj->valueint;        //0
        }

        char *data_str = cJSON_GetObjectItem(root_obj, "data")->valuestring;
        cJSON *data_obj = cJSON_Parse(data_str);
        if(!data_obj)
        {
            qDebug() << "data3 json err";
            return;
        }
        else
        {
            qDebug() << "data3 json ok";
            //history data
            cJSON *getGlobalStatis_obj = cJSON_GetObjectItem(data_obj, "globalStatis");
            getGlobalStatis(getGlobalStatis_obj);
        }
        qDebug() << "海外疫情数据更新完成";
        cJSON_Delete(root_obj);//释放内存
    }
}
/*
void Dialog::parseApi_3(QByteArray str)
{
    cJSON *root_obj = cJSON_Parse(str);   //创建JSON解析对象，返回JSON格式是否正确
    if (!root_obj)
    {
        qDebug() << "json3 format error";
        return;
    }
    else
    {
        qDebug() << "json3 format ok";
        cJSON *content_arr = cJSON_GetObjectItem(root_obj, "content");
        qDebug() << QCoreApplication::applicationDirPath();
        QString tmp = QCoreApplication::applicationDirPath() + "/" + "html_rumor.txt";;
        QFile file(tmp);
        if(!file.open(QIODevice::ReadOnly))
        {
            qDebug() << "rumor文件打开失败";
        }
        QByteArray allData = file.readAll();
        QList<QByteArray> ba;
        file.close();
        ba = allData.split('*');
        QString html;

        if(cJSON_IsArray(content_arr))
        {
            qDebug() << "data3 json ok";
            qint8 content_size = cJSON_GetArraySize(content_arr);
//            qDebug() << content_size;       //10
            for(qint8 i = 0; i < content_size; i++)
            {
               cJSON *content_obj = cJSON_GetArrayItem(content_arr, i);

               QString date = cJSON_GetObjectItem(content_obj, "date")->valuestring;//"2020-02-12"
               QString result = cJSON_GetObjectItem(content_obj, "result")->valuestring;//"假"
//               QString markstyle = cJSON_GetObjectItem(content_obj, "markstyle")->valuestring;//"fake"
               QString explain = cJSON_GetObjectItem(content_obj, "explain")->valuestring;//"谣言"
               QString title = cJSON_GetObjectItem(content_obj, "title")->valuestring;//"拔头两侧的白发可以防治新型冠状病毒肺炎"
               QString author = cJSON_GetObjectItem(content_obj, "author")->valuestring;//"腾讯旗下专业医学科普平台"
               QString id = cJSON_GetObjectItem(content_obj, "id")->valuestring; //"fdfb9439ecf2a5113791a46252764ece"

               QString bgmClr;
               if(result == "假")        //假
                   bgmClr = bgmClr_fake;
               else if(result == "真")   //真
                   bgmClr = bgmClr_true;
               else                      //疑
                   bgmClr = bgmClr_doubt;

               QString head = "[" + result + "]" + explain;
               QString from = date + " " + author;
               QString str = ba[0] + bgmClr + ba[1] + head+ ba[2] + id + ba[3] + title + ba[4] + from + ba[5];

               html.append(str);
            }
        }
        else
            qDebug() << "data3 json error";
        html.append(ba[6]);
//        ui->tb_rumor->clear();
//        ui->tb_rumor->setHtml(html);
        qDebug() << "辟谣信息更新成功";
        qDebug() << "**********************************";
        cJSON_Delete(root_obj);//释放内存
    }
}
*/
void Dialog::getArticelData(cJSON *article_arr)
{
    qint8 article_size = cJSON_GetArraySize(article_arr);

    //    QString tmp = QCoreApplication::applicationDirPath() + "/" + "html_news.txt";
    //    QFile file(tmp);
    QFile file(":/html_news.txt");

    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "文件打开失败";
        return;
    }
    QByteArray allData = file.readAll();
    file.close();
    QList<QByteArray> ba;
    ba = allData.split('*');
    QString html;

    for(qint8 i = 0; i < article_size; i++)
    {
        cJSON *article_obj = cJSON_GetArrayItem(article_arr, i);

        QString media = cJSON_GetObjectItem(article_obj, "media")->valuestring;
        QString publish_time = cJSON_GetObjectItem(article_obj, "publish_time")->valuestring;
        QString desc = cJSON_GetObjectItem(article_obj, "desc")->valuestring;
        QString url = cJSON_GetObjectItem(article_obj, "url")->valuestring;
        QString title = cJSON_GetObjectItem(article_obj, "title")->valuestring;

        QString str = ba[0] + title + ba[1] + desc + ba[2] + url + ba[3] + media + ba[4] + publish_time + ba[5];
        html.append(str);
    }
    html.append(ba[6]);
    ui->tb_news->clear();
    ui->tb_news->setHtml(html);
}

void Dialog::getCityStatis(cJSON *cityStatis_obj)
{
    //    int confirm = cJSON_GetObjectItem(cityStatis_obj, "confirm")->valueint;
    int zeroNowConfirm = cJSON_GetObjectItem(cityStatis_obj, "zeroNowConfirm")->valueint;
    int notZeroNowConfirm = cJSON_GetObjectItem(cityStatis_obj, "notZeroNowConfirm")->valueint;

    ui->lbe_notzeroCity->setNum(notZeroNowConfirm);
    ui->lbe_zeroCity->setNum(zeroNowConfirm);

    //    qDebug() << confirm << zeroNowConfirm << notZeroNowConfirm;
}

void Dialog::getGlobalStatis(cJSON *globalStatis_obj)
{
    int nowConfirm = cJSON_GetObjectItem(globalStatis_obj, "nowConfirm")->valueint;
    int confirm = cJSON_GetObjectItem(globalStatis_obj, "confirm")->valueint;
    int heal = cJSON_GetObjectItem(globalStatis_obj, "heal")->valueint;
    int dead = cJSON_GetObjectItem(globalStatis_obj, "dead")->valueint;

    ui->lbe_global_confirm->setNum(confirm);
    ui->lbe_global_nowConfirm->setNum(nowConfirm);
    ui->lbe_global_heal->setNum(heal);
    ui->lbe_global_dead->setNum(dead);

    int nowConfirmAdd = cJSON_GetObjectItem(globalStatis_obj, "nowConfirmAdd")->valueint;
    int confirmAdd = cJSON_GetObjectItem(globalStatis_obj, "confirmAdd")->valueint;
    int healAdd = cJSON_GetObjectItem(globalStatis_obj, "healAdd")->valueint;
    int deadAdd = cJSON_GetObjectItem(globalStatis_obj, "deadAdd")->valueint;

    lbeDisplay(ui->lbe_global_confirmAdd, confirmAdd);
    lbeDisplay(ui->lbe_global_nowConfirmAdd, nowConfirmAdd);
    lbeDisplay(ui->lbe_global_healAdd, healAdd);
    lbeDisplay(ui->lbe_global_deadAdd, deadAdd);

    //    qDebug() << nowConfirm << confirm << heal << dead;
    //    qDebug() << nowConfirmAdd << confirmAdd << healAdd << deadAdd;
}

//china day history data
void Dialog::getChinaDayListData(cJSON *chinaDayList_arr)
{
    if(cJSON_IsArray(chinaDayList_arr))
    {
        qint8 arr_size = cJSON_GetArraySize(chinaDayList_arr);
        //        qDebug() << arr_size;
        for(qint8 i = 0; i < arr_size; i++)
        {
            cJSON *obj = cJSON_GetArrayItem(chinaDayList_arr, i);
            int confirm = cJSON_GetObjectItem(obj, "confirm")->valueint;
            int suspect = cJSON_GetObjectItem(obj, "suspect")->valueint;
            int dead = cJSON_GetObjectItem(obj, "dead")->valueint;
            int heal = cJSON_GetObjectItem(obj, "heal")->valueint;
            int nowConfirm = cJSON_GetObjectItem(obj, "nowConfirm")->valueint;
            int nowSevere = cJSON_GetObjectItem(obj, "nowSevere")->valueint;
            int importedCase = cJSON_GetObjectItem(obj, "importedCase")->valueint;

            QString deadRate = cJSON_GetObjectItem(obj, "deadRate")->valuestring;
            QString healRate = cJSON_GetObjectItem(obj, "healRate")->valuestring;
            QString date = cJSON_GetObjectItem(obj, "date")->valuestring;
            //            if(i == arr_size - 1)
            //                qDebug() << date << confirm << suspect << dead << heal << nowConfirm << nowSevere << importedCase << deadRate << healRate;
        }
    }
}

void Dialog::getChinaDayAddListData(cJSON *chinaDayAddList_arr)
{
    if(cJSON_IsArray(chinaDayAddList_arr))
    {
        qint8 arr_size = cJSON_GetArraySize(chinaDayAddList_arr);
        //        qDebug() << arr_size;
        for(qint8 i = 0; i < arr_size; i++)
        {
            cJSON *obj = cJSON_GetArrayItem(chinaDayAddList_arr, i);
            int confirm = cJSON_GetObjectItem(obj, "confirm")->valueint;
            int suspect = cJSON_GetObjectItem(obj, "suspect")->valueint;
            int dead = cJSON_GetObjectItem(obj, "dead")->valueint;
            int heal = cJSON_GetObjectItem(obj, "heal")->valueint;
            int importedCase = cJSON_GetObjectItem(obj, "importedCase")->valueint;

            QString deadRate = cJSON_GetObjectItem(obj, "deadRate")->valuestring;
            QString healRate = cJSON_GetObjectItem(obj, "healRate")->valuestring;
            QString date = cJSON_GetObjectItem(obj, "date")->valuestring;
            if(i == arr_size - 1)
            {
                //                qDebug() << date << confirm << suspect << dead << heal << importedCase << deadRate << healRate;
                lbeDisplay(ui->lbe_add_suspect, suspect);
            }
        }
    }
}
