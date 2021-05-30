#ifndef MYHELPER_H
#define MYHELPER_H

#include <QString>
#include <QFile>
#include <QWidget>
#include <QDateTime>
#include <QDate>

#define CURRENT_TIME qPrintable (QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"))
#define CURRENT_DATE qPrintable (QDate::currentDate().toString("yyyy-MM-dd"))

class MyHelper
{
public:
    MyHelper();

    // 文件是否存在
    static bool FileIsExist(QString strFile)
    {
        QFile tempFile(strFile);
        return tempFile.exists();
    }

    // 窗体居中显示
    static void formInCenter(QWidget *w, int deskWidth, int deskHeight)
    {
        int wX = w->width();
        int wY = w->height();
        QPoint movePoint(deskWidth / 2 - wX / 2, deskHeight / 2 - wY / 2);
        w->move(movePoint);
    }

};

#endif // MYHELPER_H
