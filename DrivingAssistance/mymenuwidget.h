#ifndef MYMENUWIDGET_H
#define MYMENUWIDGET_H

#include <QWidget>

class QHBoxLayout;
class QPushButton;

class MyMenuWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyMenuWidget(QWidget *parent = nullptr);
    QPushButton *AddButton(QString icon, QString text);

private:
    QHBoxLayout* m_pLayout;

signals:

public slots:
};

#endif // MYMENUWIDGET_H
