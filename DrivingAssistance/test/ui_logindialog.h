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
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(430, 330);
        LoginDialog->setMinimumSize(QSize(430, 330));
        LoginDialog->setMaximumSize(QSize(430, 330));
        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 161, 17));
        label->setMidLineWidth(10);
        pushButton = new QPushButton(LoginDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 230, 240, 35));
        pushButton->setMinimumSize(QSize(240, 25));
        pushButton_2 = new QPushButton(LoginDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 300, 81, 20));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
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
        pushButton_2->setFlat(true);
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 30, 381, 51));
        label_2->setAutoFillBackground(true);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/resource/logo/logo_cyzy.png")));
        label_2->setScaledContents(true);
        label_2->setWordWrap(false);
        formLayoutWidget = new QWidget(LoginDialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(80, 110, 279, 80));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(25, 25));
        label_5->setMaximumSize(QSize(25, 25));
        label_5->setAutoFillBackground(true);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/logo/resource/icon/icon_acc.png")));
        label_5->setScaledContents(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(240, 30));
        lineEdit->setMaximumSize(QSize(240, 30));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(25, 25));
        label_4->setMaximumSize(QSize(25, 25));
        label_4->setAutoFillBackground(true);
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/logo/resource/icon/icon_lock.png")));
        label_4->setScaledContents(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(240, 30));
        lineEdit_2->setMaximumSize(QSize(240, 30));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "\347\231\273\351\231\206", Q_NULLPTR));
        label->setText(QApplication::translate("LoginDialog", "360\345\272\246\346\231\272\350\203\275\350\241\214\350\275\246\350\276\205\345\212\251\347\263\273\347\273\237", Q_NULLPTR));
        pushButton->setText(QApplication::translate("LoginDialog", "\347\231\273\351\231\206", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("LoginDialog", "\346\263\250\345\206\214\350\264\246\345\217\267", Q_NULLPTR));
        label_2->setText(QString());
        label_5->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("LoginDialog", "\350\264\246\345\217\267", Q_NULLPTR));
        label_4->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
