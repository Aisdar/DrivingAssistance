#include "mymenuwidget.h"
#include <QHBoxLayout>
#include <QPushButton>

MyMenuWidget::MyMenuWidget(QWidget *parent) : QWidget(parent)
{
    setFixedHeight(100);
    m_pLayout = new QHBoxLayout();
    m_pLayout->setContentsMargins(10, 5, 10, 5);
    setLayout(m_pLayout);
    this->setStyleSheet("back");
}

QPushButton *MyMenuWidget::AddButton(QString icon, QString text)
{
    QPushButton *btn = new QPushButton(QIcon(icon), text);
    m_pLayout->addWidget(btn);
    return btn;
}
