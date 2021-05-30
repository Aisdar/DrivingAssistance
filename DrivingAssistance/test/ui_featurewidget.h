/********************************************************************************
** Form generated from reading UI file 'featurewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEATUREWIDGET_H
#define UI_FEATUREWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FeatureWidget
{
public:

    void setupUi(QWidget *FeatureWidget)
    {
        if (FeatureWidget->objectName().isEmpty())
            FeatureWidget->setObjectName(QStringLiteral("FeatureWidget"));
        FeatureWidget->resize(400, 300);

        retranslateUi(FeatureWidget);

        QMetaObject::connectSlotsByName(FeatureWidget);
    } // setupUi

    void retranslateUi(QWidget *FeatureWidget)
    {
        FeatureWidget->setWindowTitle(QApplication::translate("FeatureWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FeatureWidget: public Ui_FeatureWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEATUREWIDGET_H
