/********************************************************************************
** Form generated from reading UI file 'settingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGWIDGET_H
#define UI_SETTINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *TitleLab;
    QLabel *IPLab;
    QLineEdit *IPEdit;
    QLabel *PortLab;
    QLineEdit *PortEdit;
    QLabel *LocalMemoryLab;
    QLineEdit *LocalMemoryEdit;
    QLabel *AutoDeleteLab;
    QCheckBox *AutoDeleteCheck;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *OKBtn;
    QPushButton *RevertBtn;

    void setupUi(QWidget *SettingWidget)
    {
        if (SettingWidget->objectName().isEmpty())
            SettingWidget->setObjectName(QStringLiteral("SettingWidget"));
        SettingWidget->resize(493, 261);
        gridLayout = new QGridLayout(SettingWidget);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 10);
        TitleLab = new QLabel(SettingWidget);
        TitleLab->setObjectName(QStringLiteral("TitleLab"));
        TitleLab->setMaximumSize(QSize(16777215, 100));
        QFont font;
        font.setPointSize(18);
        TitleLab->setFont(font);
        TitleLab->setAlignment(Qt::AlignCenter);
        TitleLab->setWordWrap(false);

        gridLayout->addWidget(TitleLab, 0, 0, 1, 2);

        IPLab = new QLabel(SettingWidget);
        IPLab->setObjectName(QStringLiteral("IPLab"));
        QFont font1;
        font1.setPointSize(16);
        IPLab->setFont(font1);
        IPLab->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(IPLab, 1, 0, 1, 1);

        IPEdit = new QLineEdit(SettingWidget);
        IPEdit->setObjectName(QStringLiteral("IPEdit"));

        gridLayout->addWidget(IPEdit, 1, 1, 1, 1);

        PortLab = new QLabel(SettingWidget);
        PortLab->setObjectName(QStringLiteral("PortLab"));
        PortLab->setFont(font1);
        PortLab->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(PortLab, 2, 0, 1, 1);

        PortEdit = new QLineEdit(SettingWidget);
        PortEdit->setObjectName(QStringLiteral("PortEdit"));

        gridLayout->addWidget(PortEdit, 2, 1, 1, 1);

        LocalMemoryLab = new QLabel(SettingWidget);
        LocalMemoryLab->setObjectName(QStringLiteral("LocalMemoryLab"));
        LocalMemoryLab->setFont(font1);
        LocalMemoryLab->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LocalMemoryLab, 3, 0, 1, 1);

        LocalMemoryEdit = new QLineEdit(SettingWidget);
        LocalMemoryEdit->setObjectName(QStringLiteral("LocalMemoryEdit"));

        gridLayout->addWidget(LocalMemoryEdit, 3, 1, 1, 1);

        AutoDeleteLab = new QLabel(SettingWidget);
        AutoDeleteLab->setObjectName(QStringLiteral("AutoDeleteLab"));
        AutoDeleteLab->setFont(font1);
        AutoDeleteLab->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(AutoDeleteLab, 4, 0, 1, 1);

        AutoDeleteCheck = new QCheckBox(SettingWidget);
        AutoDeleteCheck->setObjectName(QStringLiteral("AutoDeleteCheck"));
        AutoDeleteCheck->setFont(font1);

        gridLayout->addWidget(AutoDeleteCheck, 4, 1, 1, 1);

        widget = new QWidget(SettingWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(30);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 0, 10, 0);
        OKBtn = new QPushButton(widget);
        OKBtn->setObjectName(QStringLiteral("OKBtn"));

        horizontalLayout->addWidget(OKBtn);

        RevertBtn = new QPushButton(widget);
        RevertBtn->setObjectName(QStringLiteral("RevertBtn"));

        horizontalLayout->addWidget(RevertBtn);


        gridLayout->addWidget(widget, 5, 0, 1, 2);


        retranslateUi(SettingWidget);

        QMetaObject::connectSlotsByName(SettingWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingWidget)
    {
        SettingWidget->setWindowTitle(QApplication::translate("SettingWidget", "Form", Q_NULLPTR));
        TitleLab->setText(QApplication::translate("SettingWidget", "\345\275\223\345\211\215\347\263\273\347\273\237\347\211\210\346\234\254\357\274\232360\345\272\246\346\231\272\350\203\275\350\241\214\350\275\246\350\276\205\345\212\251\347\263\273\347\273\237 v1.0", Q_NULLPTR));
        IPLab->setText(QApplication::translate("SettingWidget", "\346\234\215\345\212\241\345\231\250\347\263\273\347\273\237IP", Q_NULLPTR));
        PortLab->setText(QApplication::translate("SettingWidget", "\346\234\215\345\212\241\345\231\250\347\263\273\347\273\237\347\253\257\345\217\243", Q_NULLPTR));
        LocalMemoryLab->setText(QApplication::translate("SettingWidget", "\346\234\254\345\234\260\345\255\230\345\202\250\345\244\247\345\260\217", Q_NULLPTR));
        AutoDeleteLab->setText(QApplication::translate("SettingWidget", "\346\230\257\345\220\246\350\207\252\345\212\250\345\210\240\351\231\244", Q_NULLPTR));
        AutoDeleteCheck->setText(QApplication::translate("SettingWidget", "\345\205\201\350\256\270\350\207\252\345\212\250\345\210\240\351\231\244", Q_NULLPTR));
        OKBtn->setText(QApplication::translate("SettingWidget", "\347\241\256\345\256\232", Q_NULLPTR));
        RevertBtn->setText(QApplication::translate("SettingWidget", "\350\277\230\345\216\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingWidget: public Ui_SettingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGWIDGET_H
