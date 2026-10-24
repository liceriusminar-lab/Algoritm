#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>

namespace Ui {
class SettingsDialog;
}

class settings : public QDialog
{
public:
    explicit settings(QWidget *parent = nullptr);
    ~settings();

    void setToolbarVisible(bool visible);
    bool toolbarVisible() const;

    void setDarkTheme(bool dark);
    bool darkTheme() const;

private:
    Ui::SettingsDialog *ui;
};

#endif // SETTINGS_H
