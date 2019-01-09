#include "proj2.h"
#include "ui_proj2.h"
#include <QtCore>
#include <QtGui>
#include <QDir>
#include <QFileDialog>

proj2::proj2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::proj2)
{
    ui->setupUi(this);
}

proj2::~proj2()
{
    delete ui;
}

void proj2::on_browse_bn_clicked()
{
    QString folder_path = QFileDialog::getOpenFileName(this,
            tr("Open DXF File"),"C://Users/","DXF Files (*.dxf)");
    ui->path_tb->setText(folder_path);

    QString folder_path1 = ui->path_tb->text() + "Yes";
    ui->path_tb->setText(folder_path1);
}
