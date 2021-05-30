/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *TitleLab;
    QPushButton *LoginBtn;
    QPushButton *RegBtn;
    QLabel *IconLab;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *AccLab;
    QLineEdit *AccEdit;
    QLabel *PwdLab;
    QLineEdit *PwdEdit;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(430, 330);
        LoginDialog->setMinimumSize(QSize(430, 330));
        LoginDialog->setMaximumSize(QSize(430, 330));
        TitleLab = new QLabel(LoginDialog);
        TitleLab->setObjectName(QStringLiteral("TitleLab"));
        TitleLab->setGeometry(QRect(10, 10, 161, 17));
        TitleLab->setMidLineWidth(10);
        LoginBtn = new QPushButton(LoginDialog);
        LoginBtn->setObjectName(QStringLiteral("LoginBtn"));
        LoginBtn->setGeometry(QRect(90, 230, 240, 35));
        LoginBtn->setMinimumSize(QSize(240, 25));
        RegBtn = new QPushButton(LoginDialog);
        RegBtn->setObjectName(QStringLiteral("RegBtn"));
        RegBtn->setGeometry(QRect(0, 300, 81, 20));
        RegBtn->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-style: outset;\n"
"}\n"
"QPushButton:hovet\n"
"{\n"
"	\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	color:rgb(166, 166, 166);\n"
"	border-style: inset;\n"
"}"));
        RegBtn->setFlat(true);
        IconLab = new QLabel(LoginDialog);
        IconLab->setObjectName(QStringLiteral("IconLab"));
        IconLab->setGeometry(QRect(20, 30, 381, 51));
        IconLab->setAutoFillBackground(true);
        IconLab->setPixmap(QPixmap(QString::fromUtf8(":/resource/logo/logo_cyzy.png")));
        IconLab->setScaledContents(true);
        IconLab->setWordWrap(false);
        formLayoutWidget = new QWidget(LoginDialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(80, 110, 283, 80));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(6);
        formLayout->setVerticalSpacing(6);
        formLayout->setContentsMargins(6, 6, 6, 6);
        AccLab = new QLabel(formLayoutWidget);
        AccLab->setObjectName(QStringLiteral("AccLab"));
        AccLab->setMinimumSize(QSize(25, 25));
        AccLab->setMaximumSize(QSize(25, 25));
        AccLab->setAutoFillBackground(true);
        AccLab->setPixmap(QPixmap(QString::fromUtf8(":/resource/icon/icon_acc.png")));
        AccLab->setScaledContents(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, AccLab);

        AccEdit = new QLineEdit(formLayoutWidget);
        AccEdit->setObjectName(QStringLiteral("AccEdit"));
        AccEdit->setMinimumSize(QSize(240, 30));
        AccEdit->setMaximumSize(QSize(240, 30));

        formLayout->setWidget(0, QFormLayout::FieldRole, AccEdit);

        PwdLab = new QLabel(formLayoutWidget);
        PwdLab->setObjectName(QStringLiteral("PwdLab"));
        PwdLab->setMinimumSize(QSize(25, 25));
        PwdLab->setMaximumSize(QSize(25, 25));
        PwdLab->setAutoFillBackground(true);
        PwdLab->setPixmap(QPixmap(QString::fromUtf8(":/resource/icon/icon_lock.png")));
        PwdLab->setScaledContents(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, PwdLab);

        PwdEdit = new QLineEdit(formLayoutWidget);
        PwdEdit->setObjectName(QStringLiteral("PwdEdit"));
        PwdEdit->setMinimumSize(QSize(240, 30));
        PwdEdit->setMaximumSize(QSize(240, 30));
        PwdEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, PwdEdit);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "\347\231\273\351\231\206", Q_NULLPTR));
        TitleLab->setText(QApplication::translate("LoginDialog", "360\345\272\246\346\231\272\350\203\275\350\241\214\350\275\246\350\276\205\345\212\251\347\263\273\347\273\237", Q_NULLPTR));
        LoginBtn->setText(QApplication::translate("LoginDialog", "\347\231\273\351\231\206", Q_NULLPTR));
        RegBtn->setText(QApplication::translate("LoginDialog", "\346\263\250\345\206\214\350\264\246\345\217\267", Q_NULLPTR));
        IconLab->setText(QString());
        AccLab->setText(QString());
        AccEdit->setPlaceholderText(QApplication::translate("LoginDialog", "\350\264\246\345\217\267", Q_NULLPTR));
        PwdLab->setText(QString());
        PwdEdit->setPlaceholderText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
