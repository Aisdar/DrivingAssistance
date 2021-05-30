/********************************************************************************
** Form generated from reading UI file 'videoitem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOITEM_H
#define UI_VIDEOITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoItem
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QWidget *VideoItem)
    {
        if (VideoItem->objectName().isEmpty())
            VideoItem->setObjectName(QStringLiteral("VideoItem"));
        VideoItem->resize(246, 159);
        gridLayout = new QGridLayout(VideoItem);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(VideoItem);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 2, 1);

        label_2 = new QLabel(VideoItem);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(VideoItem);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        pushButton = new QPushButton(VideoItem);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);


        retranslateUi(VideoItem);

        QMetaObject::connectSlotsByName(VideoItem);
    } // setupUi

    void retranslateUi(QWidget *VideoItem)
    {
        VideoItem->setWindowTitle(QApplication::translate("VideoItem", "Form", Q_NULLPTR));
        label_4->setText(QApplication::translate("VideoItem", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("VideoItem", "\350\256\260\345\275\225\344\272\216\n"
" 2021-5-26 00:00:00", Q_NULLPTR));
        label_3->setText(QApplication::translate("VideoItem", "\350\247\202\347\234\213 0%", Q_NULLPTR));
        pushButton->setText(QApplication::translate("VideoItem", "\346\222\255\346\224\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VideoItem: public Ui_VideoItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOITEM_H
