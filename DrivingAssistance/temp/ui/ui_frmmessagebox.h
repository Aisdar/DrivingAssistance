/********************************************************************************
** Form generated from reading UI file 'frmmessagebox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMESSAGEBOX_H
#define UI_FRMMESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmMessageBox
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *TitleWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *TitleIconLab;
    QLabel *TitleTextLab;
    QPushButton *ClostBtn;
    QGroupBox *MainBox;
    QWidget *CheckBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *OKBtn;
    QPushButton *CancelBtn;
    QLabel *TextLab;
    QLabel *IconLab;

    void setupUi(QDialog *frmMessageBox)
    {
        if (frmMessageBox->objectName().isEmpty())
            frmMessageBox->setObjectName(QStringLiteral("frmMessageBox"));
        frmMessageBox->resize(255, 130);
        frmMessageBox->setMaximumSize(QSize(16777215, 16777215));
        frmMessageBox->setAutoFillBackground(false);
        frmMessageBox->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(frmMessageBox);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TitleWidget = new QWidget(frmMessageBox);
        TitleWidget->setObjectName(QStringLiteral("TitleWidget"));
        TitleWidget->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"	border-bottom:1px solid black;\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(TitleWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        TitleIconLab = new QLabel(TitleWidget);
        TitleIconLab->setObjectName(QStringLiteral("TitleIconLab"));
        TitleIconLab->setMaximumSize(QSize(30, 30));
        TitleIconLab->setAutoFillBackground(false);
        TitleIconLab->setStyleSheet(QStringLiteral("border-image: url(:/resource/icon/icon_app.png);"));
        TitleIconLab->setScaledContents(true);

        horizontalLayout_2->addWidget(TitleIconLab);

        TitleTextLab = new QLabel(TitleWidget);
        TitleTextLab->setObjectName(QStringLiteral("TitleTextLab"));
        QFont font;
        font.setPointSize(14);
        TitleTextLab->setFont(font);

        horizontalLayout_2->addWidget(TitleTextLab);

        ClostBtn = new QPushButton(TitleWidget);
        ClostBtn->setObjectName(QStringLiteral("ClostBtn"));
        ClostBtn->setMaximumSize(QSize(28, 28));
        ClostBtn->setAutoFillBackground(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resource/icon/icon_close.png"), QSize(), QIcon::Normal, QIcon::Off);
        ClostBtn->setIcon(icon);
        ClostBtn->setIconSize(QSize(30, 30));
        ClostBtn->setFlat(true);

        horizontalLayout_2->addWidget(ClostBtn);


        verticalLayout->addWidget(TitleWidget);

        MainBox = new QGroupBox(frmMessageBox);
        MainBox->setObjectName(QStringLiteral("MainBox"));
        MainBox->setMaximumSize(QSize(260, 16777215));
        MainBox->setStyleSheet(QLatin1String("QGroupBox\n"
"{\n"
"	border:0px;\n"
"}"));
        CheckBox = new QWidget(MainBox);
        CheckBox->setObjectName(QStringLiteral("CheckBox"));
        CheckBox->setGeometry(QRect(10, 60, 241, 31));
        horizontalLayout = new QHBoxLayout(CheckBox);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 10, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        OKBtn = new QPushButton(CheckBox);
        OKBtn->setObjectName(QStringLiteral("OKBtn"));

        horizontalLayout->addWidget(OKBtn);

        CancelBtn = new QPushButton(CheckBox);
        CancelBtn->setObjectName(QStringLiteral("CancelBtn"));

        horizontalLayout->addWidget(CancelBtn);

        TextLab = new QLabel(MainBox);
        TextLab->setObjectName(QStringLiteral("TextLab"));
        TextLab->setGeometry(QRect(80, 10, 171, 35));
        TextLab->setFont(font);
        TextLab->setAlignment(Qt::AlignCenter);
        IconLab = new QLabel(MainBox);
        IconLab->setObjectName(QStringLiteral("IconLab"));
        IconLab->setGeometry(QRect(20, 10, 45, 45));
        IconLab->setMinimumSize(QSize(45, 45));
        IconLab->setMaximumSize(QSize(45, 45));
        IconLab->setAutoFillBackground(false);
        IconLab->setStyleSheet(QStringLiteral("border-image: url(:/resource/icon/icon_info.png);"));
        IconLab->setFrameShadow(QFrame::Plain);
        IconLab->setScaledContents(true);

        verticalLayout->addWidget(MainBox);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 5);

        retranslateUi(frmMessageBox);

        QMetaObject::connectSlotsByName(frmMessageBox);
    } // setupUi

    void retranslateUi(QDialog *frmMessageBox)
    {
        frmMessageBox->setWindowTitle(QApplication::translate("frmMessageBox", "Dialog", Q_NULLPTR));
        TitleIconLab->setText(QString());
        TitleTextLab->setText(QApplication::translate("frmMessageBox", "\346\217\220\347\244\272", Q_NULLPTR));
        ClostBtn->setText(QString());
        MainBox->setTitle(QString());
        OKBtn->setText(QApplication::translate("frmMessageBox", "\347\241\256\345\256\232", Q_NULLPTR));
        CancelBtn->setText(QApplication::translate("frmMessageBox", "\345\217\226\346\266\210", Q_NULLPTR));
        TextLab->setText(QApplication::translate("frmMessageBox", "\347\241\256\345\256\232\344\277\235\345\255\230\357\274\237", Q_NULLPTR));
        IconLab->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class frmMessageBox: public Ui_frmMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMESSAGEBOX_H
