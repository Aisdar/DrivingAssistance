/********************************************************************************
** Form generated from reading UI file 'applicationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATIONWINDOW_H
#define UI_APPLICATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "drivingwidget.h"
#include "featurewidget.h"
#include "reversingwidget.h"
#include "settingwidget.h"
#include "surveywidget.h"
#include "videorecordwidget.h"

QT_BEGIN_NAMESPACE

class Ui_ApplicationWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *LeftMainWidget;
    QVBoxLayout *verticalLayout;
    QWidget *UserWidget;
    QGridLayout *gridLayout;
    QLabel *HeadImageLab;
    QLabel *NicknameLab;
    QLabel *TimeLab;
    QGroupBox *FunctionBtnBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *VideoRecordBtn;
    QPushButton *DrivingBtn;
    QPushButton *Btn3;
    QPushButton *Btn4;
    QPushButton *Btn5;
    QPushButton *Btn6;
    QPushButton *ExitBtn;
    QSpacerItem *verticalSpacer;
    QStackedWidget *RightMainStack;
    QWidget *FunctionWidget;
    QHBoxLayout *horizontalLayout_2;
    QStackedWidget *FunctionStack;
    VideoRecordWidget *VideoRecordPage;
    DrivingWidget *DrivingPage;
    ReversingWidget *ReversingPage;
    SurveyWidget *SurveyPage;
    FeatureWidget *FeaturePage;
    SettingWidget *SettingPage;
    QWidget *VideoWidget;

    void setupUi(QWidget *ApplicationWindow)
    {
        if (ApplicationWindow->objectName().isEmpty())
            ApplicationWindow->setObjectName(QStringLiteral("ApplicationWindow"));
        ApplicationWindow->resize(734, 576);
        horizontalLayout = new QHBoxLayout(ApplicationWindow);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        LeftMainWidget = new QWidget(ApplicationWindow);
        LeftMainWidget->setObjectName(QStringLiteral("LeftMainWidget"));
        verticalLayout = new QVBoxLayout(LeftMainWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        UserWidget = new QWidget(LeftMainWidget);
        UserWidget->setObjectName(QStringLiteral("UserWidget"));
        gridLayout = new QGridLayout(UserWidget);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        HeadImageLab = new QLabel(UserWidget);
        HeadImageLab->setObjectName(QStringLiteral("HeadImageLab"));

        gridLayout->addWidget(HeadImageLab, 0, 0, 1, 1);

        NicknameLab = new QLabel(UserWidget);
        NicknameLab->setObjectName(QStringLiteral("NicknameLab"));

        gridLayout->addWidget(NicknameLab, 0, 1, 1, 1);

        TimeLab = new QLabel(UserWidget);
        TimeLab->setObjectName(QStringLiteral("TimeLab"));

        gridLayout->addWidget(TimeLab, 1, 0, 1, 2);

        gridLayout->setRowStretch(0, 2);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addWidget(UserWidget);

        FunctionBtnBox = new QGroupBox(LeftMainWidget);
        FunctionBtnBox->setObjectName(QStringLiteral("FunctionBtnBox"));
        verticalLayout_2 = new QVBoxLayout(FunctionBtnBox);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        VideoRecordBtn = new QPushButton(FunctionBtnBox);
        VideoRecordBtn->setObjectName(QStringLiteral("VideoRecordBtn"));
        VideoRecordBtn->setFlat(true);

        verticalLayout_2->addWidget(VideoRecordBtn);

        DrivingBtn = new QPushButton(FunctionBtnBox);
        DrivingBtn->setObjectName(QStringLiteral("DrivingBtn"));
        DrivingBtn->setFlat(true);

        verticalLayout_2->addWidget(DrivingBtn);

        Btn3 = new QPushButton(FunctionBtnBox);
        Btn3->setObjectName(QStringLiteral("Btn3"));
        Btn3->setFlat(true);

        verticalLayout_2->addWidget(Btn3);

        Btn4 = new QPushButton(FunctionBtnBox);
        Btn4->setObjectName(QStringLiteral("Btn4"));
        Btn4->setFlat(true);

        verticalLayout_2->addWidget(Btn4);

        Btn5 = new QPushButton(FunctionBtnBox);
        Btn5->setObjectName(QStringLiteral("Btn5"));
        Btn5->setFlat(true);

        verticalLayout_2->addWidget(Btn5);

        Btn6 = new QPushButton(FunctionBtnBox);
        Btn6->setObjectName(QStringLiteral("Btn6"));
        Btn6->setFlat(true);

        verticalLayout_2->addWidget(Btn6);

        ExitBtn = new QPushButton(FunctionBtnBox);
        ExitBtn->setObjectName(QStringLiteral("ExitBtn"));
        ExitBtn->setFlat(true);

        verticalLayout_2->addWidget(ExitBtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addWidget(FunctionBtnBox);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 4);

        horizontalLayout->addWidget(LeftMainWidget);

        RightMainStack = new QStackedWidget(ApplicationWindow);
        RightMainStack->setObjectName(QStringLiteral("RightMainStack"));
        FunctionWidget = new QWidget();
        FunctionWidget->setObjectName(QStringLiteral("FunctionWidget"));
        horizontalLayout_2 = new QHBoxLayout(FunctionWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        FunctionStack = new QStackedWidget(FunctionWidget);
        FunctionStack->setObjectName(QStringLiteral("FunctionStack"));
        VideoRecordPage = new VideoRecordWidget();
        VideoRecordPage->setObjectName(QStringLiteral("VideoRecordPage"));
        FunctionStack->addWidget(VideoRecordPage);
        DrivingPage = new DrivingWidget();
        DrivingPage->setObjectName(QStringLiteral("DrivingPage"));
        FunctionStack->addWidget(DrivingPage);
        ReversingPage = new ReversingWidget();
        ReversingPage->setObjectName(QStringLiteral("ReversingPage"));
        FunctionStack->addWidget(ReversingPage);
        SurveyPage = new SurveyWidget();
        SurveyPage->setObjectName(QStringLiteral("SurveyPage"));
        FunctionStack->addWidget(SurveyPage);
        FeaturePage = new FeatureWidget();
        FeaturePage->setObjectName(QStringLiteral("FeaturePage"));
        FunctionStack->addWidget(FeaturePage);
        SettingPage = new SettingWidget();
        SettingPage->setObjectName(QStringLiteral("SettingPage"));
        SettingPage->setStyleSheet(QLatin1String("SettingWidget\n"
"{\n"
"	background:rgb(32, 74, 135)\n"
"}"));
        FunctionStack->addWidget(SettingPage);

        horizontalLayout_2->addWidget(FunctionStack);

        RightMainStack->addWidget(FunctionWidget);
        VideoWidget = new QWidget();
        VideoWidget->setObjectName(QStringLiteral("VideoWidget"));
        RightMainStack->addWidget(VideoWidget);

        horizontalLayout->addWidget(RightMainStack);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 4);

        retranslateUi(ApplicationWindow);

        RightMainStack->setCurrentIndex(0);
        FunctionStack->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(ApplicationWindow);
    } // setupUi

    void retranslateUi(QWidget *ApplicationWindow)
    {
        ApplicationWindow->setWindowTitle(QApplication::translate("ApplicationWindow", "\346\231\272\350\203\275\350\241\214\350\275\246\350\276\205\345\212\251\347\263\273\347\273\237", Q_NULLPTR));
        HeadImageLab->setText(QApplication::translate("ApplicationWindow", "\345\244\264\345\203\217", Q_NULLPTR));
        NicknameLab->setText(QApplication::translate("ApplicationWindow", "\346\230\265\347\247\260", Q_NULLPTR));
        TimeLab->setText(QApplication::translate("ApplicationWindow", "\346\227\266\351\227\264", Q_NULLPTR));
        FunctionBtnBox->setTitle(QApplication::translate("ApplicationWindow", "\346\214\211\351\222\256\347\273\204", Q_NULLPTR));
        VideoRecordBtn->setText(QApplication::translate("ApplicationWindow", "\350\247\206\351\242\221\350\256\260\345\275\225", Q_NULLPTR));
        DrivingBtn->setText(QApplication::translate("ApplicationWindow", "\350\241\214\350\275\246\346\250\241\345\274\217", Q_NULLPTR));
        Btn3->setText(QApplication::translate("ApplicationWindow", "\345\200\222\350\275\246\346\250\241\345\274\217", Q_NULLPTR));
        Btn4->setText(QApplication::translate("ApplicationWindow", "\351\270\237\347\236\260\346\250\241\345\274\217", Q_NULLPTR));
        Btn5->setText(QApplication::translate("ApplicationWindow", "\347\211\271\345\276\201\350\256\260\345\275\225", Q_NULLPTR));
        Btn6->setText(QApplication::translate("ApplicationWindow", "\347\263\273\347\273\237\350\256\276\347\275\256", Q_NULLPTR));
        ExitBtn->setText(QApplication::translate("ApplicationWindow", "\351\200\200\345\207\272\347\263\273\347\273\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ApplicationWindow: public Ui_ApplicationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATIONWINDOW_H
