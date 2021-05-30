/********************************************************************************
** Form generated from reading UI file 'surveywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SURVEYWIDGET_H
#define UI_SURVEYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SurveyWidget
{
public:

    void setupUi(QWidget *SurveyWidget)
    {
        if (SurveyWidget->objectName().isEmpty())
            SurveyWidget->setObjectName(QStringLiteral("SurveyWidget"));
        SurveyWidget->resize(400, 300);

        retranslateUi(SurveyWidget);

        QMetaObject::connectSlotsByName(SurveyWidget);
    } // setupUi

    void retranslateUi(QWidget *SurveyWidget)
    {
        SurveyWidget->setWindowTitle(QApplication::translate("SurveyWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SurveyWidget: public Ui_SurveyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SURVEYWIDGET_H
