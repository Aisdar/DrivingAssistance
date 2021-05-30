#ifndef VIDEOITEM_H
#define VIDEOITEM_H

#include <QWidget>

namespace Ui {
class VideoItem;
}

class VideoItem : public QWidget
{
    Q_OBJECT

public:
    explicit VideoItem(QWidget *parent = nullptr);
    ~VideoItem();
    void SetIcon(QString path);

private:
    Ui::VideoItem *ui;
};

#endif // VIDEOITEM_H
