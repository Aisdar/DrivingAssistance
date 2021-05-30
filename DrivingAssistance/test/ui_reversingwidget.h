/********************************************************************************
** Form generated from reading UI file 'reversingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVERSINGWIDGET_H
#define UI_REVERSINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReversingWidget
{
public:

    void setupUi(QWidget *ReversingWidget)
    {
        if (ReversingWidget->objectName().isEmpty())
            ReversingWidget->setObjectName(QStringLiteral("ReversingWidget"));
        ReversingWidget->resize(400, 300);

        retranslateUi(ReversingWidget);

        QMetaObject::connectSlotsByName(ReversingWidget);
    } // setupUi

    void retranslateUi(QWidget *ReversingWidget)
    {
        ReversingWidget->setWindowTitle(QApplication::translate("ReversingWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ReversingWidget: public Ui_ReversingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVERSINGWIDGET_H
