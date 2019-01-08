#include "cad_to_path.h"
#include "ui_cad_to_path.h"

CAD_to_path::CAD_to_path(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CAD_to_path)
{
    ui->setupUi(this);
}

CAD_to_path::~CAD_to_path()
{
    delete ui;
}
