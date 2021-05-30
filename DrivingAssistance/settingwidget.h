#ifndef SETTINGWIDGET_H
#define SETTINGWIDGET_H

#include <QWidget>

namespace Ui {
class SettingWidget;
}

class SettingWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SettingWidget(QWidget *parent = nullptr);
    ~SettingWidget();
    Ui::SettingWidget *getUi();

private slots:
    void on_OKBtn_clicked();

    void on_RevertBtn_clicked();

private:
    void InitSettings();


private:
    Ui::SettingWidget *ui;

};

#endif // SETTINGWIDGET_H
