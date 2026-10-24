/********************************************************************************
** Form generated from reading UI file 'aut.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUT_H
#define UI_AUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutWindow
{
public:
    QAction *actionSettings;
    QAction *actionExit;
    QAction *actionOpenImage;
    QAction *actionClearImage;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelImage;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuImage;
    QToolBar *toolBar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AutWindow)
    {
        if (AutWindow->objectName().isEmpty())
            AutWindow->setObjectName("AutWindow");
        AutWindow->resize(640, 480);
        actionSettings = new QAction(AutWindow);
        actionSettings->setObjectName("actionSettings");
        actionExit = new QAction(AutWindow);
        actionExit->setObjectName("actionExit");
        actionOpenImage = new QAction(AutWindow);
        actionOpenImage->setObjectName("actionOpenImage");
        actionClearImage = new QAction(AutWindow);
        actionClearImage->setObjectName("actionClearImage");
        centralwidget = new QWidget(AutWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        labelImage = new QLabel(centralwidget);
        labelImage->setObjectName("labelImage");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(labelImage->sizePolicy().hasHeightForWidth());
        labelImage->setSizePolicy(sizePolicy);
        labelImage->setMinimumSize(QSize(200, 150));
        labelImage->setFrameShape(QFrame::Shape::StyledPanel);
        labelImage->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(labelImage);

        AutWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AutWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 640, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuImage = new QMenu(menubar);
        menuImage->setObjectName("menuImage");
        AutWindow->setMenuBar(menubar);
        toolBar = new QToolBar(AutWindow);
        toolBar->setObjectName("toolBar");
        AutWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);
        statusbar = new QStatusBar(AutWindow);
        statusbar->setObjectName("statusbar");
        AutWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuImage->menuAction());
        menuFile->addAction(actionSettings);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuImage->addAction(actionOpenImage);
        menuImage->addAction(actionClearImage);
        toolBar->addAction(actionOpenImage);
        toolBar->addAction(actionSettings);
        toolBar->addAction(actionExit);

        retranslateUi(AutWindow);

        QMetaObject::connectSlotsByName(AutWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AutWindow)
    {
        AutWindow->setWindowTitle(QCoreApplication::translate("AutWindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\276\320\272\320\275\320\276", nullptr));
        actionSettings->setText(QCoreApplication::translate("AutWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270\342\200\246", nullptr));
#if QT_CONFIG(shortcut)
        actionSettings->setShortcut(QCoreApplication::translate("AutWindow", "Ctrl+,", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("AutWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("AutWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpenImage->setText(QCoreApplication::translate("AutWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265\342\200\246", nullptr));
#if QT_CONFIG(shortcut)
        actionOpenImage->setShortcut(QCoreApplication::translate("AutWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClearImage->setText(QCoreApplication::translate("AutWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        labelImage->setText(QCoreApplication::translate("AutWindow", "\320\230\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\275\320\265 \320\262\321\213\320\261\321\200\320\260\320\275\320\276", nullptr));
        menuFile->setTitle(QCoreApplication::translate("AutWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menuImage->setTitle(QCoreApplication::translate("AutWindow", "\320\230\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("AutWindow", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AutWindow: public Ui_AutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUT_H
