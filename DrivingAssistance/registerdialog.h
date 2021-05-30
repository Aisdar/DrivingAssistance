#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QDialog>

namespace Ui {
class RegisterDialog;
}

class RegisterDialog : public QDialog
{
    Q_OBJECT

public:

    enum RegStatus{
        REGISTE_FAILED,
        REGISTED,
        TO_LOGIN
    };

    explicit RegisterDialog(QWidget *parent = nullptr);
    ~RegisterDialog();

private slots:
    void on_RegBtn_clicked();
    void on_BackBtn_clicked();
    void SLOT_dealRegRs(int status);

private:
    Ui::RegisterDialog *ui;
};

#endif // REGISTERDIALOG_H
