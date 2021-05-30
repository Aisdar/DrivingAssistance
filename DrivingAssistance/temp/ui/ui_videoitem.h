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
    QLabel *VideoIconLab;
    QLabel *TimeLab;
    QLabel *ProcessLab;
    QPushButton *PlayBtn;

    void setupUi(QWidget *VideoItem)
    {
        if (VideoItem->objectName().isEmpty())
            VideoItem->setObjectName(QStringLiteral("VideoItem"));
        VideoItem->resize(246, 159);
        gridLayout = new QGridLayout(VideoItem);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        VideoIconLab = new QLabel(VideoItem);
        VideoIconLab->setObjectName(QStringLiteral("VideoIconLab"));
        VideoIconLab->setPixmap(QPixmap(QString::fromUtf8(":/resource/img/img_damaged-60.png")));
        VideoIconLab->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(VideoIconLab, 0, 0, 2, 1);

        TimeLab = new QLabel(VideoItem);
        TimeLab->setObjectName(QStringLiteral("TimeLab"));

        gridLayout->addWidget(TimeLab, 0, 1, 1, 1);

        ProcessLab = new QLabel(VideoItem);
        ProcessLab->setObjectName(QStringLiteral("ProcessLab"));

        gridLayout->addWidget(ProcessLab, 1, 1, 1, 1);

        PlayBtn = new QPushButton(VideoItem);
        PlayBtn->setObjectName(QStringLiteral("PlayBtn"));

        gridLayout->addWidget(PlayBtn, 2, 1, 1, 1);


        retranslateUi(VideoItem);

        QMetaObject::connectSlotsByName(VideoItem);
    } // setupUi

    void retranslateUi(QWidget *VideoItem)
    {
        VideoItem->setWindowTitle(QApplication::translate("VideoItem", "Form", Q_NULLPTR));
        VideoIconLab->setText(QString());
        TimeLab->setText(QApplication::translate("VideoItem", "\350\256\260\345\275\225\344\272\216\n"
" 2021-5-26 00:00:00", Q_NULLPTR));
        ProcessLab->setText(QApplication::translate("VideoItem", "\345\267\262\350\247\202\347\234\213 0%", Q_NULLPTR));
        PlayBtn->setText(QApplication::translate("VideoItem", "\346\222\255\346\224\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VideoItem: public Ui_VideoItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOITEM_H
