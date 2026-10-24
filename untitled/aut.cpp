#include "aut.h"
#include "ui_aut.h"
#include "settings.h"

#include <QApplication>
#include <QFileDialog>
#include <QFileInfo>
#include <QPixmap>

aut::aut(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AutWindow)
{
    ui->setupUi(this);
    connect(ui->actionSettings,   &QAction::triggered, this, [this] { openSettings(); });
    connect(ui->actionExit,       &QAction::triggered, this, &QWidget::close);
    connect(ui->actionOpenImage,  &QAction::triggered, this, [this] { openImage(); });
    connect(ui->actionClearImage, &QAction::triggered, this, [this] { clearImage(); });

    ui->statusbar->showMessage("Готово", 3000);
}

aut::~aut()
{
    delete ui;
}
void aut::openSettings()
{
    settings dlg(this);
    dlg.setToolbarVisible(ui->toolBar->isVisible());
    dlg.setDarkTheme(m_dark);

    if (dlg.exec() == QDialog::Accepted) {
        ui->toolBar->setVisible(dlg.toolbarVisible());
        applyTheme(dlg.darkTheme());
        ui->statusbar->showMessage("Настройки применены", 3000);
    }
}
void aut::openImage()
{
    const QString path = QFileDialog::getOpenFileName(
        this, "Открыть изображение", QString(),
        "Изображения (*.png *.jpg *.jpeg *.bmp *.gif);;Все файлы (*)");
    if (path.isEmpty())
        return;

    const QPixmap pix(path);
    if (pix.isNull()) {
        ui->statusbar->showMessage("Не удалось открыть изображение", 4000);
        return;
    }

    ui->labelImage->setPixmap(pix.scaled(ui->labelImage->size(),
                                         Qt::KeepAspectRatio, Qt::SmoothTransformation));
    ui->statusbar->showMessage("Открыто: " + QFileInfo(path).fileName(), 4000);
}
void aut::clearImage()
{
    ui->labelImage->clear();
    ui->labelImage->setText("Изображение не выбрано");
    ui->statusbar->showMessage("Изображение убрано", 3000);
}

void aut::applyTheme(bool dark)
{
    m_dark = dark;
    qApp->setStyleSheet(dark
        ? "QWidget { background-color: #2b2b2b; color: #e6e6e6; }"
          "QMenuBar::item:selected, QMenu::item:selected { background: #3d6fb4; }"
          "QPushButton { background: #3c3c3c; border: 1px solid #555; padding: 4px 8px; }"
          "QToolBar { border: 0; spacing: 6px; }"
        : QString());
}
