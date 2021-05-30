/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

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

class Ui_RegisterDialog
{
public:
    QLabel *TitleLab;
    QPushButton *RegBtn;
    QLabel *IconLab;
    QPushButton *BackBtn;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *NicknameIconLab;
    QLineEdit *NickNameEdit;
    QLabel *PwdIconLab;
    QLineEdit *PwdEdit;
    QLineEdit *CheckPwdEdit;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName(QStringLiteral("RegisterDialog"));
        RegisterDialog->resize(400, 300);
        TitleLab = new QLabel(RegisterDialog);
        TitleLab->setObjectName(QStringLiteral("TitleLab"));
        TitleLab->setGeometry(QRect(10, 10, 161, 17));
        RegBtn = new QPushButton(RegisterDialog);
        RegBtn->setObjectName(QStringLiteral("RegBtn"));
        RegBtn->setGeometry(QRect(70, 240, 120, 35));
        RegBtn->setMinimumSize(QSize(120, 25));
        IconLab = new QLabel(RegisterDialog);
        IconLab->setObjectName(QStringLiteral("IconLab"));
        IconLab->setGeometry(QRect(20, 30, 381, 51));
        IconLab->setAutoFillBackground(true);
        IconLab->setPixmap(QPixmap(QString::fromUtf8(":/resource/logo/logo_cyzy.png")));
        IconLab->setScaledContents(true);
        IconLab->setWordWrap(false);
        BackBtn = new QPushButton(RegisterDialog);
        BackBtn->setObjectName(QStringLiteral("BackBtn"));
        BackBtn->setGeometry(QRect(200, 240, 120, 35));
        BackBtn->setMinimumSize(QSize(120, 25));
        formLayoutWidget = new QWidget(RegisterDialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(50, 100, 281, 104));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        NicknameIconLab = new QLabel(formLayoutWidget);
        NicknameIconLab->setObjectName(QStringLiteral("NicknameIconLab"));
        NicknameIconLab->setMinimumSize(QSize(25, 25));
        NicknameIconLab->setMaximumSize(QSize(25, 25));
        NicknameIconLab->setAutoFillBackground(true);
        NicknameIconLab->setPixmap(QPixmap(QString::fromUtf8(":/resource/icon/icon_nickname.png")));
        NicknameIconLab->setScaledContents(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, NicknameIconLab);

        NickNameEdit = new QLineEdit(formLayoutWidget);
        NickNameEdit->setObjectName(QStringLiteral("NickNameEdit"));
        NickNameEdit->setMinimumSize(QSize(240, 30));
        NickNameEdit->setMaximumSize(QSize(240, 30));

        formLayout->setWidget(0, QFormLayout::FieldRole, NickNameEdit);

        PwdIconLab = new QLabel(formLayoutWidget);
        PwdIconLab->setObjectName(QStringLiteral("PwdIconLab"));
        PwdIconLab->setMinimumSize(QSize(25, 25));
        PwdIconLab->setMaximumSize(QSize(25, 25));
        PwdIconLab->setAutoFillBackground(true);
        PwdIconLab->setPixmap(QPixmap(QString::fromUtf8(":/resource/icon/icon_lock.png")));
        PwdIconLab->setScaledContents(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, PwdIconLab);

        PwdEdit = new QLineEdit(formLayoutWidget);
        PwdEdit->setObjectName(QStringLiteral("PwdEdit"));
        PwdEdit->setMinimumSize(QSize(240, 30));
        PwdEdit->setMaximumSize(QSize(240, 30));
        PwdEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, PwdEdit);

        CheckPwdEdit = new QLineEdit(formLayoutWidget);
        CheckPwdEdit->setObjectName(QStringLiteral("CheckPwdEdit"));
        CheckPwdEdit->setMinimumSize(QSize(240, 30));
        CheckPwdEdit->setMaximumSize(QSize(240, 30));
        CheckPwdEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, CheckPwdEdit);


        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QApplication::translate("RegisterDialog", "Dialog", Q_NULLPTR));
        TitleLab->setText(QApplication::translate("RegisterDialog", "360\345\272\246\346\231\272\350\203\275\350\241\214\350\275\246\350\276\205\345\212\251\347\263\273\347\273\237", Q_NULLPTR));
        RegBtn->setText(QApplication::translate("RegisterDialog", "\346\263\250\345\206\214", Q_NULLPTR));
        IconLab->setText(QString());
        BackBtn->setText(QApplication::translate("RegisterDialog", "\350\277\224\345\233\236", Q_NULLPTR));
        NicknameIconLab->setText(QString());
        NickNameEdit->setPlaceholderText(QApplication::translate("RegisterDialog", "\346\230\265\347\247\260", Q_NULLPTR));
        PwdIconLab->setText(QString());
        PwdEdit->setPlaceholderText(QApplication::translate("RegisterDialog", "\345\257\206\347\240\201", Q_NULLPTR));
        CheckPwdEdit->setPlaceholderText(QApplication::translate("RegisterDialog", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
