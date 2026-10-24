#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aut.h"

namespace {
const QString kLogin    = QStringLiteral("admin");
const QString kPassword = QStringLiteral("123");
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Password_3->setEchoMode(QLineEdit::Password);
    ui->Password->setEchoMode(QLineEdit::Password);
    ui->Password_2->setEchoMode(QLineEdit::Password);
    connect(ui->Login_2, &QPushButton::clicked, this, &MainWindow::loginUser);
    connect(ui->GotoREG, &QPushButton::clicked, this, &MainWindow::goToReg);
    connect(ui->GotoLOG, &QPushButton::clicked, this, &MainWindow::registerUser);
    connect(ui->Exit,    &QPushButton::clicked, this, &QWidget::close);
    connect(ui->Password_3, &QLineEdit::returnPressed, this, &MainWindow::loginUser);
    connect(ui->Password_2, &QLineEdit::returnPressed, this, &MainWindow::registerUser);
    connect(ui->checkBox_2, &QCheckBox::toggled, this, [this](bool show) {
        ui->Password_3->setEchoMode(show ? QLineEdit::Normal : QLineEdit::Password);
    });
    connect(ui->checkBox, &QCheckBox::toggled, this, [this](bool show) {
        const QLineEdit::EchoMode mode = show ? QLineEdit::Normal : QLineEdit::Password;
        ui->Password->setEchoMode(mode);
        ui->Password_2->setEchoMode(mode);
    });
    ui->tabWidget->setCurrentWidget(ui->LOG);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::goToReg()
{
    ui->tabWidget->setCurrentWidget(ui->REG);
}
void MainWindow::goToLog()
{
    ui->tabWidget->setCurrentWidget(ui->LOG);
}
void MainWindow::registerUser()
{
    ui->Login->clear();
    ui->Password->clear();
    ui->Password_2->clear();

    ui->Login_3->clear();
    ui->Password_3->clear();
    goToLog();
    ui->Login_3->setFocus();
}
void MainWindow::loginUser()
{
    if (ui->Login_3->text() == kLogin && ui->Password_3->text() == kPassword) {
        aut *w = new aut();
        w->setAttribute(Qt::WA_DeleteOnClose);
        w->show();
        this->close();
    } else {
        ui->statusbar->showMessage("Неверный логин или пароль", 3000);
        ui->Password_3->clear();
    }
}