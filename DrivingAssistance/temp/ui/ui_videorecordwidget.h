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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoRecordWidget
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;

    void setupUi(QWidget *VideoRecordWidget)
    {
        if (VideoRecordWidget->objectName().isEmpty())
            VideoRecordWidget->setObjectName(QStringLiteral("VideoRecordWidget"));
        VideoRecordWidget->resize(663, 480);
        gridLayout = new QGridLayout(VideoRecordWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(VideoRecordWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 661, 478));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


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
