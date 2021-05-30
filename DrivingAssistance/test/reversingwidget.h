#ifndef REVERSINGWIDGET_H
#define REVERSINGWIDGET_H

#include <QWidget>

namespace Ui {
class ReversingWidget;
}

class ReversingWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ReversingWidget(QWidget *parent = nullptr);
    ~ReversingWidget();

private:
    Ui::ReversingWidget *ui;
};

#endif // REVERSINGWIDGET_H
