/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_main;
    QTabWidget *tabWidget;
    QWidget *LOG;
    QVBoxLayout *verticalLayout_log;
    QLabel *Logni_2;
    QLineEdit *Login_3;
    QLabel *Paral_2;
    QLineEdit *Password_3;
    QCheckBox *checkBox_2;
    QPushButton *Login_2;
    QPushButton *GotoREG;
    QSpacerItem *verticalSpacer_log;
    QWidget *REG;
    QVBoxLayout *verticalLayout_reg;
    QLabel *Logni;
    QLineEdit *Login;
    QLabel *Paral;
    QLineEdit *Password;
    QLineEdit *Password_2;
    QCheckBox *checkBox;
    QPushButton *GotoLOG;
    QPushButton *Exit;
    QSpacerItem *verticalSpacer_reg;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(420, 430);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_main = new QVBoxLayout(centralwidget);
        verticalLayout_main->setObjectName("verticalLayout_main");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        LOG = new QWidget();
        LOG->setObjectName("LOG");
        verticalLayout_log = new QVBoxLayout(LOG);
        verticalLayout_log->setObjectName("verticalLayout_log");
        Logni_2 = new QLabel(LOG);
        Logni_2->setObjectName("Logni_2");
        QFont font;
        font.setPointSize(16);
        Logni_2->setFont(font);

        verticalLayout_log->addWidget(Logni_2);

        Login_3 = new QLineEdit(LOG);
        Login_3->setObjectName("Login_3");

        verticalLayout_log->addWidget(Login_3);

        Paral_2 = new QLabel(LOG);
        Paral_2->setObjectName("Paral_2");
        Paral_2->setFont(font);

        verticalLayout_log->addWidget(Paral_2);

        Password_3 = new QLineEdit(LOG);
        Password_3->setObjectName("Password_3");

        verticalLayout_log->addWidget(Password_3);

        checkBox_2 = new QCheckBox(LOG);
        checkBox_2->setObjectName("checkBox_2");

        verticalLayout_log->addWidget(checkBox_2);

        Login_2 = new QPushButton(LOG);
        Login_2->setObjectName("Login_2");

        verticalLayout_log->addWidget(Login_2);

        GotoREG = new QPushButton(LOG);
        GotoREG->setObjectName("GotoREG");

        verticalLayout_log->addWidget(GotoREG);

        verticalSpacer_log = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_log->addItem(verticalSpacer_log);

        tabWidget->addTab(LOG, QString());
        REG = new QWidget();
        REG->setObjectName("REG");
        verticalLayout_reg = new QVBoxLayout(REG);
        verticalLayout_reg->setObjectName("verticalLayout_reg");
        Logni = new QLabel(REG);
        Logni->setObjectName("Logni");
        Logni->setFont(font);

        verticalLayout_reg->addWidget(Logni);

        Login = new QLineEdit(REG);
        Login->setObjectName("Login");

        verticalLayout_reg->addWidget(Login);

        Paral = new QLabel(REG);
        Paral->setObjectName("Paral");
        Paral->setFont(font);

        verticalLayout_reg->addWidget(Paral);

        Password = new QLineEdit(REG);
        Password->setObjectName("Password");

        verticalLayout_reg->addWidget(Password);

        Password_2 = new QLineEdit(REG);
        Password_2->setObjectName("Password_2");

        verticalLayout_reg->addWidget(Password_2);

        checkBox = new QCheckBox(REG);
        checkBox->setObjectName("checkBox");

        verticalLayout_reg->addWidget(checkBox);

        GotoLOG = new QPushButton(REG);
        GotoLOG->setObjectName("GotoLOG");

        verticalLayout_reg->addWidget(GotoLOG);

        Exit = new QPushButton(REG);
        Exit->setObjectName("Exit");

        verticalLayout_reg->addWidget(Exit);

        verticalSpacer_reg = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_reg->addItem(verticalSpacer_reg);

        tabWidget->addTab(REG, QString());

        verticalLayout_main->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        Logni_2->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        Paral_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        Login_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        GotoREG->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(LOG), QCoreApplication::translate("MainWindow", "LOG", nullptr));
        Logni->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        Paral->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        Password_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        GotoLOG->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        Exit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(REG), QCoreApplication::translate("MainWindow", "REG", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
