#ifndef VIDEORECORDWIDGET_H
#define VIDEORECORDWIDGET_H

#include <QWidget>

namespace Ui {
class VideoRecordWidget;
}

class VideoRecordWidget : public QWidget
{
    Q_OBJECT

public:
    explicit VideoRecordWidget(QWidget *parent = nullptr);
    ~VideoRecordWidget();

private:
    Ui::VideoRecordWidget *ui;
};

#endif // VIDEORECORDWIDGET_H
