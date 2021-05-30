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

private:
    void InitSettings();


private:
    Ui::SettingWidget *ui;

};

#endif // SETTINGWIDGET_H
