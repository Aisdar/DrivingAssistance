/********************************************************************************
** Form generated from reading UI file 'videoviewwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOVIEWWIDGET_H
#define UI_VIDEOVIEWWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoViewWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *VideoScreenWidget;

    void setupUi(QWidget *VideoViewWidget)
    {
        if (VideoViewWidget->objectName().isEmpty())
            VideoViewWidget->setObjectName(QStringLiteral("VideoViewWidget"));
        VideoViewWidget->resize(585, 519);
        VideoViewWidget->setMouseTracking(true);
        verticalLayout = new QVBoxLayout(VideoViewWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        VideoScreenWidget = new QWidget(VideoViewWidget);
        VideoScreenWidget->setObjectName(QStringLiteral("VideoScreenWidget"));
        VideoScreenWidget->setMouseTracking(true);

        verticalLayout->addWidget(VideoScreenWidget);


        retranslateUi(VideoViewWidget);

        QMetaObject::connectSlotsByName(VideoViewWidget);
    } // setupUi

    void retranslateUi(QWidget *VideoViewWidget)
    {
        VideoViewWidget->setWindowTitle(QApplication::translate("VideoViewWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VideoViewWidget: public Ui_VideoViewWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOVIEWWIDGET_H
