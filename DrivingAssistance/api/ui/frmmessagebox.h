#ifndef FRMMESSAGEBOX_H
#define FRMMESSAGEBOX_H

#include <QDialog>

namespace Ui {
class frmMessageBox;
}

class frmMessageBox : public QDialog
{
    Q_OBJECT
public:

    /* 消息框返回的结果值 */
    enum MsgRes
    {
        OK,
        CANCEL
    };

    /* 消息框支持的类型 */
    enum MsgType
    {
        ERROR,
        INFO,
        QUESTION
    };

    explicit frmMessageBox(QWidget *parent = nullptr);
    ~frmMessageBox();
    void SetContentText(QString text);
    void SetIconType();
    void SetMessage(QString msg, MsgType type);

protected:
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *);

private slots:
    void on_OKBtn_clicked();

    void on_CancelBtn_clicked();

private:
    Ui::frmMessageBox *ui;
    QPoint mousePoint;  // 鼠标拖动自定义标题栏时的坐标
    bool mousePressed;  // 鼠标是否按下

private:
    void InitStyle();
};

#endif // FRMMESSAGEBOX_H
