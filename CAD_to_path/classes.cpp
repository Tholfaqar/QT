#include "QList"
#include <QtCore>
#include <QtGui>
#include <QDir>
#include <QFileDialog>

class Path
    {
        //working directory path
        public:
        QString folder_path;
        //working dir + *.dxf at end. use this to read *.dxf files.
        QString file_path;
        QString file_name;
        //QString program_path;
    };

 class Rob_base_offset
    {
        //this class will save the tool offset
        public:
    QString base_offset;
        //public string str_x_off, str_y_off, str_z_off, str_yaw_off, str_pitch_off, str_roll_off;
    double x_off, y_off, z_off, yaw_off, pitch_off, roll_off;
    QList<double> offset_array;
    };

 class Point
    {
     public:
        QString str_x1, str_y1, str_z1, str_yaw, str_pitch, str_roll, str_r1;
        QString str_x2, str_y2, str_z2;
        double x,y,x1, y1, z1, x2, y2, z2, yaw, pitch, roll;
        double poly_pts[1000][2];
    };
 class Res
    {
        // this class is for adding resolution to each line, circle or arc.
        // basically, each like will be devided by line_res sections..
        public:
        int line_res = 10, circ_res = 1, arc_res = 1;
    };
