#ifndef CAD_TO_PATH_H
#define CAD_TO_PATH_H

#include <QMainWindow>

namespace Ui {
class CAD_to_path;
}

class CAD_to_path : public QMainWindow
{
    Q_OBJECT

public:
    explicit CAD_to_path(QWidget *parent = nullptr);
    ~CAD_to_path();

private slots:
    void on_browse_bn_clicked();

    void on_gen_pg_bn_clicked();

    void generate_pg();

private:
    Ui::CAD_to_path *ui;
};

#endif // CAD_TO_PATH_H
