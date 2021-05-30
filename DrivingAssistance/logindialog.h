#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QString>

class RegisterDialog;

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:

    enum
    {
        LOGIN_FAILED,
        LOGIN_SUCCEED,
        TO_REG
    };

    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

private:
    Ui::LoginDialog *ui;

protected:

private slots:
    void on_LoginBtn_clicked();
    void on_RegBtn_clicked();
    void SLOT_dealLoginRs(int status);
};

#endif // LOGINDIALOG_H
