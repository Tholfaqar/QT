#ifndef PROJ2_H
#define PROJ2_H

#include <QMainWindow>

namespace Ui {
class proj2;
}

class proj2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit proj2(QWidget *parent = nullptr);
    ~proj2();

private slots:
    void on_browse_bn_clicked();

private:
    Ui::proj2 *ui;
};

#endif // PROJ2_H
