/********************************************************************************
** Form generated from reading UI file 'processbarmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSBARMENU_H
#define UI_PROCESSBARMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessBarMenu
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *TopMainWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *CurrentTimeLab;
    QSlider *TopHorizontalSlider;
    QLabel *TotalTimeLab;
    QWidget *BottomMainWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *LeftHorizontalSpacer;
    QToolButton *StopBtn;
    QToolButton *LastBtn;
    QToolButton *StartBtn;
    QToolButton *NextBtn;
    QSpacerItem *RightHorizontalSpacer;

    void setupUi(QWidget *ProcessBarMenu)
    {
        if (ProcessBarMenu->objectName().isEmpty())
            ProcessBarMenu->setObjectName(QStringLiteral("ProcessBarMenu"));
        ProcessBarMenu->resize(711, 102);
        verticalLayout = new QVBoxLayout(ProcessBarMenu);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TopMainWidget = new QWidget(ProcessBarMenu);
        TopMainWidget->setObjectName(QStringLiteral("TopMainWidget"));
        horizontalLayout_2 = new QHBoxLayout(TopMainWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        CurrentTimeLab = new QLabel(TopMainWidget);
        CurrentTimeLab->setObjectName(QStringLiteral("CurrentTimeLab"));

        horizontalLayout_2->addWidget(CurrentTimeLab);

        TopHorizontalSlider = new QSlider(TopMainWidget);
        TopHorizontalSlider->setObjectName(QStringLiteral("TopHorizontalSlider"));
        TopHorizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(TopHorizontalSlider);

        TotalTimeLab = new QLabel(TopMainWidget);
        TotalTimeLab->setObjectName(QStringLiteral("TotalTimeLab"));

        horizontalLayout_2->addWidget(TotalTimeLab);


        verticalLayout->addWidget(TopMainWidget);

        BottomMainWidget = new QWidget(ProcessBarMenu);
        BottomMainWidget->setObjectName(QStringLiteral("BottomMainWidget"));
        horizontalLayout = new QHBoxLayout(BottomMainWidget);
        horizontalLayout->setSpacing(30);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        LeftHorizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(LeftHorizontalSpacer);

        StopBtn = new QToolButton(BottomMainWidget);
        StopBtn->setObjectName(QStringLiteral("StopBtn"));
        StopBtn->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resource/icon/icon_stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        StopBtn->setIcon(icon);
        StopBtn->setIconSize(QSize(20, 20));
        StopBtn->setAutoRepeat(false);
        StopBtn->setAutoExclusive(false);
        StopBtn->setAutoRaise(true);

        horizontalLayout->addWidget(StopBtn);

        LastBtn = new QToolButton(BottomMainWidget);
        LastBtn->setObjectName(QStringLiteral("LastBtn"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resource/icon/icon_last.png"), QSize(), QIcon::Normal, QIcon::Off);
        LastBtn->setIcon(icon1);
        LastBtn->setAutoRaise(true);

        horizontalLayout->addWidget(LastBtn);

        StartBtn = new QToolButton(BottomMainWidget);
        StartBtn->setObjectName(QStringLiteral("StartBtn"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resource/icon/icon_start.png"), QSize(), QIcon::Normal, QIcon::Off);
        StartBtn->setIcon(icon2);
        StartBtn->setAutoRaise(true);

        horizontalLayout->addWidget(StartBtn);

        NextBtn = new QToolButton(BottomMainWidget);
        NextBtn->setObjectName(QStringLiteral("NextBtn"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resource/icon/icon_next.png"), QSize(), QIcon::Normal, QIcon::Off);
        NextBtn->setIcon(icon3);
        NextBtn->setAutoRaise(true);

        horizontalLayout->addWidget(NextBtn);

        RightHorizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(RightHorizontalSpacer);


        verticalLayout->addWidget(BottomMainWidget);


        retranslateUi(ProcessBarMenu);

        QMetaObject::connectSlotsByName(ProcessBarMenu);
    } // setupUi

    void retranslateUi(QWidget *ProcessBarMenu)
    {
        ProcessBarMenu->setWindowTitle(QString());
        CurrentTimeLab->setText(QApplication::translate("ProcessBarMenu", "00:00:00", Q_NULLPTR));
        TotalTimeLab->setText(QApplication::translate("ProcessBarMenu", "00:00:00", Q_NULLPTR));
        StopBtn->setText(QString());
        LastBtn->setText(QString());
        StartBtn->setText(QApplication::translate("ProcessBarMenu", "...", Q_NULLPTR));
        NextBtn->setText(QApplication::translate("ProcessBarMenu", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProcessBarMenu: public Ui_ProcessBarMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSBARMENU_H
