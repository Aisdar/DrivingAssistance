#ifndef VIDEOVIEWWIDEGT_H
#define VIDEOVIEWWIDEGT_H

#include <QWidget>

namespace Ui {
class VideoViewWidegt;
}

class VideoViewWidegt : public QWidget
{
    Q_OBJECT

public:
    explicit VideoViewWidegt(QWidget *parent = nullptr);
    ~VideoViewWidegt();

private:
    Ui::VideoViewWidegt *ui;
};

#endif // VIDEOVIEWWIDEGT_H
