#ifndef AUT_H
#define AUT_H

#include <QMainWindow>

namespace Ui {
class AutWindow;
}

class aut : public QMainWindow
{
public:
    explicit aut(QWidget *parent = nullptr);
    ~aut();

private:
    void openImage();
    void clearImage();
    void openSettings();
    void applyTheme(bool dark);

    Ui::AutWindow *ui;
    bool m_dark = false;
};

#endif // AUT_H
