#include "settings.h"
#include "ui_settings.h"

settings::settings(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SettingsDialog)
{
    ui->setupUi(this);
}

settings::~settings()
{
    delete ui;
}

void settings::setToolbarVisible(bool visible)
{
    ui->checkBoxToolbar->setChecked(visible);
}

bool settings::toolbarVisible() const
{
    return ui->checkBoxToolbar->isChecked();
}

void settings::setDarkTheme(bool dark)
{
    ui->checkBoxDark->setChecked(dark);
}

bool settings::darkTheme() const
{
    return ui->checkBoxDark->isChecked();
}
