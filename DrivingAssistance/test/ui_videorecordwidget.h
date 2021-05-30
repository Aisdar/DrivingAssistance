/********************************************************************************
** Form generated from reading UI file 'videorecordwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEORECORDWIDGET_H
#define UI_VIDEORECORDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoRecordWidget
{
public:

    void setupUi(QWidget *VideoRecordWidget)
    {
        if (VideoRecordWidget->objectName().isEmpty())
            VideoRecordWidget->setObjectName(QStringLiteral("VideoRecordWidget"));
        VideoRecordWidget->resize(400, 300);

        retranslateUi(VideoRecordWidget);

        QMetaObject::connectSlotsByName(VideoRecordWidget);
    } // setupUi

    void retranslateUi(QWidget *VideoRecordWidget)
    {
        VideoRecordWidget->setWindowTitle(QApplication::translate("VideoRecordWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VideoRecordWidget: public Ui_VideoRecordWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEORECORDWIDGET_H
