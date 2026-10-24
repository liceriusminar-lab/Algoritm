/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxToolbar;
    QCheckBox *checkBoxDark;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName("SettingsDialog");
        SettingsDialog->resize(360, 200);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        checkBoxToolbar = new QCheckBox(SettingsDialog);
        checkBoxToolbar->setObjectName("checkBoxToolbar");
        checkBoxToolbar->setChecked(true);

        verticalLayout->addWidget(checkBoxToolbar);

        checkBoxDark = new QCheckBox(SettingsDialog);
        checkBoxDark->setObjectName("checkBoxDark");

        verticalLayout->addWidget(checkBoxDark);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        checkBoxToolbar->setText(QCoreApplication::translate("SettingsDialog", "\320\237\320\276\320\272\320\260\320\267\321\213\320\262\320\260\321\202\321\214 \320\277\320\260\320\275\320\265\320\273\321\214 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\320\276\320\262", nullptr));
        checkBoxDark->setText(QCoreApplication::translate("SettingsDialog", "\320\242\321\221\320\274\320\275\320\260\321\217 \321\202\320\265\320\274\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
