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

private:
    Ui::CAD_to_path *ui;
};

#endif // CAD_TO_PATH_H
