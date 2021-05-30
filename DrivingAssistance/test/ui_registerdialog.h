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
    QLabel *label;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName(QStringLiteral("RegisterDialog"));
        RegisterDialog->resize(400, 300);
        label = new QLabel(RegisterDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 161, 17));
        pushButton_3 = new QPushButton(RegisterDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 240, 120, 35));
        pushButton_3->setMinimumSize(QSize(120, 25));
        label_2 = new QLabel(RegisterDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 30, 381, 51));
        label_2->setAutoFillBackground(true);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/resource/logo/logo_cyzy.png")));
        label_2->setScaledContents(true);
        label_2->setWordWrap(false);
        pushButton_2 = new QPushButton(RegisterDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 240, 120, 35));
        pushButton_2->setMinimumSize(QSize(120, 25));
        formLayoutWidget = new QWidget(RegisterDialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(50, 100, 281, 104));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(25, 25));
        label_5->setMaximumSize(QSize(25, 25));
        label_5->setAutoFillBackground(true);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/logo/resource/icon/icon_nickname.png")));
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

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(240, 30));
        lineEdit_3->setMaximumSize(QSize(240, 30));
        lineEdit_3->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);


        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QApplication::translate("RegisterDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("RegisterDialog", "360\345\272\246\346\231\272\350\203\275\350\241\214\350\275\246\350\276\205\345\212\251\347\263\273\347\273\237", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("RegisterDialog", "\346\263\250\345\206\214", Q_NULLPTR));
        label_2->setText(QString());
        pushButton_2->setText(QApplication::translate("RegisterDialog", "\350\277\224\345\233\236", Q_NULLPTR));
        label_5->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("RegisterDialog", "\346\230\265\347\247\260", Q_NULLPTR));
        label_4->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("RegisterDialog", "\345\257\206\347\240\201", Q_NULLPTR));
        lineEdit_3->setPlaceholderText(QApplication::translate("RegisterDialog", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
