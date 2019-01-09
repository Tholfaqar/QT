/********************************************************************************
** Form generated from reading UI file 'cad_to_path.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAD_TO_PATH_H
#define UI_CAD_TO_PATH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CAD_to_path
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *mv_md_lbl;
    QRadioButton *ang_vel;
    QRadioButton *cart_vel;
    QCheckBox *ex_array;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QLabel *ori_lbl;
    QRadioButton *or_mode1;
    QRadioButton *or_mode2;
    QRadioButton *or_mode3;
    QFrame *line_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLineEdit *circ_tb;
    QLabel *sh_res_lbl;
    QLabel *line_lbl;
    QSpacerItem *horizontalSpacer_2;
    QLabel *circ_lbl;
    QLineEdit *line_tb;
    QLabel *arc_lbl;
    QLineEdit *arc_tb;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_3;
    QGridLayout *gridLayout_3;
    QLabel *rob_base_lbl;
    QLineEdit *FilePath_tb;
    QLabel *path_lbl;
    QLineEdit *RobOffset_tb;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *browse_bn;
    QPushButton *gen_pg_bn;
    QPushButton *exit_bn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CAD_to_path)
    {
        if (CAD_to_path->objectName().isEmpty())
            CAD_to_path->setObjectName(QString::fromUtf8("CAD_to_path"));
        CAD_to_path->resize(791, 547);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CAD_to_path->sizePolicy().hasHeightForWidth());
        CAD_to_path->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(CAD_to_path);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mv_md_lbl = new QLabel(centralWidget);
        mv_md_lbl->setObjectName(QString::fromUtf8("mv_md_lbl"));

        gridLayout_2->addWidget(mv_md_lbl, 2, 0, 1, 1);

        ang_vel = new QRadioButton(centralWidget);
        ang_vel->setObjectName(QString::fromUtf8("ang_vel"));

        gridLayout_2->addWidget(ang_vel, 4, 0, 1, 1);

        cart_vel = new QRadioButton(centralWidget);
        cart_vel->setObjectName(QString::fromUtf8("cart_vel"));
        cart_vel->setAcceptDrops(false);
        cart_vel->setChecked(true);

        gridLayout_2->addWidget(cart_vel, 3, 0, 1, 1);

        ex_array = new QCheckBox(centralWidget);
        ex_array->setObjectName(QString::fromUtf8("ex_array"));

        gridLayout_2->addWidget(ex_array, 1, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ori_lbl = new QLabel(centralWidget);
        ori_lbl->setObjectName(QString::fromUtf8("ori_lbl"));
        ori_lbl->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(ori_lbl);

        or_mode1 = new QRadioButton(centralWidget);
        or_mode1->setObjectName(QString::fromUtf8("or_mode1"));
        or_mode1->setEnabled(true);
        or_mode1->setChecked(true);
        or_mode1->setAutoExclusive(true);

        verticalLayout->addWidget(or_mode1);

        or_mode2 = new QRadioButton(centralWidget);
        or_mode2->setObjectName(QString::fromUtf8("or_mode2"));

        verticalLayout->addWidget(or_mode2);

        or_mode3 = new QRadioButton(centralWidget);
        or_mode3->setObjectName(QString::fromUtf8("or_mode3"));

        verticalLayout->addWidget(or_mode3);


        verticalLayout_2->addLayout(verticalLayout);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        circ_tb = new QLineEdit(centralWidget);
        circ_tb->setObjectName(QString::fromUtf8("circ_tb"));

        gridLayout->addWidget(circ_tb, 2, 2, 1, 1);

        sh_res_lbl = new QLabel(centralWidget);
        sh_res_lbl->setObjectName(QString::fromUtf8("sh_res_lbl"));

        gridLayout->addWidget(sh_res_lbl, 0, 0, 1, 1);

        line_lbl = new QLabel(centralWidget);
        line_lbl->setObjectName(QString::fromUtf8("line_lbl"));

        gridLayout->addWidget(line_lbl, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        circ_lbl = new QLabel(centralWidget);
        circ_lbl->setObjectName(QString::fromUtf8("circ_lbl"));

        gridLayout->addWidget(circ_lbl, 1, 2, 1, 1);

        line_tb = new QLineEdit(centralWidget);
        line_tb->setObjectName(QString::fromUtf8("line_tb"));

        gridLayout->addWidget(line_tb, 2, 0, 1, 1);

        arc_lbl = new QLabel(centralWidget);
        arc_lbl->setObjectName(QString::fromUtf8("arc_lbl"));

        gridLayout->addWidget(arc_lbl, 1, 4, 1, 1);

        arc_tb = new QLineEdit(centralWidget);
        arc_tb->setObjectName(QString::fromUtf8("arc_tb"));

        gridLayout->addWidget(arc_tb, 2, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 5, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        rob_base_lbl = new QLabel(centralWidget);
        rob_base_lbl->setObjectName(QString::fromUtf8("rob_base_lbl"));

        gridLayout_3->addWidget(rob_base_lbl, 2, 0, 1, 1);

        FilePath_tb = new QLineEdit(centralWidget);
        FilePath_tb->setObjectName(QString::fromUtf8("FilePath_tb"));

        gridLayout_3->addWidget(FilePath_tb, 1, 0, 1, 1);

        path_lbl = new QLabel(centralWidget);
        path_lbl->setObjectName(QString::fromUtf8("path_lbl"));

        gridLayout_3->addWidget(path_lbl, 0, 0, 1, 1);

        RobOffset_tb = new QLineEdit(centralWidget);
        RobOffset_tb->setObjectName(QString::fromUtf8("RobOffset_tb"));

        gridLayout_3->addWidget(RobOffset_tb, 3, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        browse_bn = new QPushButton(centralWidget);
        browse_bn->setObjectName(QString::fromUtf8("browse_bn"));

        verticalLayout_3->addWidget(browse_bn);

        gen_pg_bn = new QPushButton(centralWidget);
        gen_pg_bn->setObjectName(QString::fromUtf8("gen_pg_bn"));

        verticalLayout_3->addWidget(gen_pg_bn);

        exit_bn = new QPushButton(centralWidget);
        exit_bn->setObjectName(QString::fromUtf8("exit_bn"));

        verticalLayout_3->addWidget(exit_bn);


        verticalLayout_2->addLayout(verticalLayout_3);

        CAD_to_path->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CAD_to_path);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 791, 21));
        CAD_to_path->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CAD_to_path);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CAD_to_path->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CAD_to_path);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CAD_to_path->setStatusBar(statusBar);
        QWidget::setTabOrder(browse_bn, gen_pg_bn);
        QWidget::setTabOrder(gen_pg_bn, exit_bn);

        retranslateUi(CAD_to_path);
        QObject::connect(exit_bn, SIGNAL(clicked()), CAD_to_path, SLOT(close()));

        QMetaObject::connectSlotsByName(CAD_to_path);
    } // setupUi

    void retranslateUi(QMainWindow *CAD_to_path)
    {
        CAD_to_path->setWindowTitle(QApplication::translate("CAD_to_path", "CAD_to_path", nullptr));
        mv_md_lbl->setText(QApplication::translate("CAD_to_path", "Movement Mode", nullptr));
        ang_vel->setText(QApplication::translate("CAD_to_path", "Angular Velocity", nullptr));
        cart_vel->setText(QApplication::translate("CAD_to_path", "Cartisian Velocity", nullptr));
        ex_array->setText(QApplication::translate("CAD_to_path", "Extended Array Size", nullptr));
        ori_lbl->setText(QApplication::translate("CAD_to_path", "Orientation", nullptr));
        or_mode1->setText(QApplication::translate("CAD_to_path", "Mode 1", nullptr));
        or_mode2->setText(QApplication::translate("CAD_to_path", "Mode 2", nullptr));
        or_mode3->setText(QApplication::translate("CAD_to_path", "Mode 3", nullptr));
        circ_tb->setText(QApplication::translate("CAD_to_path", "360", nullptr));
        sh_res_lbl->setText(QApplication::translate("CAD_to_path", "Shape Resolution", nullptr));
        line_lbl->setText(QApplication::translate("CAD_to_path", "Line", nullptr));
        circ_lbl->setText(QApplication::translate("CAD_to_path", "Circle", nullptr));
        line_tb->setText(QApplication::translate("CAD_to_path", "10", nullptr));
        arc_lbl->setText(QApplication::translate("CAD_to_path", "Arc", nullptr));
        arc_tb->setText(QApplication::translate("CAD_to_path", "10", nullptr));
        rob_base_lbl->setText(QApplication::translate("CAD_to_path", "Robot Base Offset", nullptr));
        path_lbl->setText(QApplication::translate("CAD_to_path", "File Path", nullptr));
        browse_bn->setText(QApplication::translate("CAD_to_path", "Browse DXF", nullptr));
        gen_pg_bn->setText(QApplication::translate("CAD_to_path", "Generate .pg", nullptr));
        exit_bn->setText(QApplication::translate("CAD_to_path", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CAD_to_path: public Ui_CAD_to_path {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAD_TO_PATH_H
