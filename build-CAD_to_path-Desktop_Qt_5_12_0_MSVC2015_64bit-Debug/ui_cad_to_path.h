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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CAD_to_path
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *ex_array;
    QLabel *mv_md_lbl;
    QRadioButton *cart_vel;
    QRadioButton *ang_vel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *ori_lbl;
    QRadioButton *or_mode1;
    QRadioButton *or_mode2;
    QRadioButton *or_mode3;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *browse_bn;
    QPushButton *gen_pg_bn;
    QPushButton *exit_bn;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *path_lbl;
    QTextEdit *textEdit_2;
    QLabel *rob_base_lbl;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *line_tb;
    QTextEdit *circ_tb;
    QTextEdit *arc_tb;
    QLabel *sh_res_lbl;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CAD_to_path)
    {
        if (CAD_to_path->objectName().isEmpty())
            CAD_to_path->setObjectName(QString::fromUtf8("CAD_to_path"));
        CAD_to_path->resize(752, 556);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CAD_to_path->sizePolicy().hasHeightForWidth());
        CAD_to_path->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(CAD_to_path);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 20, 351, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ex_array = new QCheckBox(verticalLayoutWidget);
        ex_array->setObjectName(QString::fromUtf8("ex_array"));

        verticalLayout->addWidget(ex_array);

        mv_md_lbl = new QLabel(verticalLayoutWidget);
        mv_md_lbl->setObjectName(QString::fromUtf8("mv_md_lbl"));

        verticalLayout->addWidget(mv_md_lbl);

        cart_vel = new QRadioButton(verticalLayoutWidget);
        cart_vel->setObjectName(QString::fromUtf8("cart_vel"));

        verticalLayout->addWidget(cart_vel);

        ang_vel = new QRadioButton(verticalLayoutWidget);
        ang_vel->setObjectName(QString::fromUtf8("ang_vel"));

        verticalLayout->addWidget(ang_vel);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(390, 20, 331, 121));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        ori_lbl = new QLabel(verticalLayoutWidget_2);
        ori_lbl->setObjectName(QString::fromUtf8("ori_lbl"));
        ori_lbl->setFrameShadow(QFrame::Plain);

        verticalLayout_2->addWidget(ori_lbl);

        or_mode1 = new QRadioButton(verticalLayoutWidget_2);
        or_mode1->setObjectName(QString::fromUtf8("or_mode1"));

        verticalLayout_2->addWidget(or_mode1);

        or_mode2 = new QRadioButton(verticalLayoutWidget_2);
        or_mode2->setObjectName(QString::fromUtf8("or_mode2"));

        verticalLayout_2->addWidget(or_mode2);

        or_mode3 = new QRadioButton(verticalLayoutWidget_2);
        or_mode3->setObjectName(QString::fromUtf8("or_mode3"));

        verticalLayout_2->addWidget(or_mode3);

        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(390, 180, 331, 171));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        browse_bn = new QPushButton(verticalLayoutWidget_3);
        browse_bn->setObjectName(QString::fromUtf8("browse_bn"));

        verticalLayout_3->addWidget(browse_bn);

        gen_pg_bn = new QPushButton(verticalLayoutWidget_3);
        gen_pg_bn->setObjectName(QString::fromUtf8("gen_pg_bn"));

        verticalLayout_3->addWidget(gen_pg_bn);

        exit_bn = new QPushButton(verticalLayoutWidget_3);
        exit_bn->setObjectName(QString::fromUtf8("exit_bn"));

        verticalLayout_3->addWidget(exit_bn);

        verticalLayoutWidget_4 = new QWidget(centralWidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(30, 170, 351, 169));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        path_lbl = new QLabel(verticalLayoutWidget_4);
        path_lbl->setObjectName(QString::fromUtf8("path_lbl"));

        verticalLayout_4->addWidget(path_lbl);

        textEdit_2 = new QTextEdit(verticalLayoutWidget_4);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        verticalLayout_4->addWidget(textEdit_2);

        rob_base_lbl = new QLabel(verticalLayoutWidget_4);
        rob_base_lbl->setObjectName(QString::fromUtf8("rob_base_lbl"));

        verticalLayout_4->addWidget(rob_base_lbl);

        textEdit = new QTextEdit(verticalLayoutWidget_4);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_4->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 410, 351, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        line_tb = new QTextEdit(horizontalLayoutWidget_2);
        line_tb->setObjectName(QString::fromUtf8("line_tb"));

        horizontalLayout_2->addWidget(line_tb);

        circ_tb = new QTextEdit(horizontalLayoutWidget_2);
        circ_tb->setObjectName(QString::fromUtf8("circ_tb"));

        horizontalLayout_2->addWidget(circ_tb);

        arc_tb = new QTextEdit(horizontalLayoutWidget_2);
        arc_tb->setObjectName(QString::fromUtf8("arc_tb"));

        horizontalLayout_2->addWidget(arc_tb);

        sh_res_lbl = new QLabel(centralWidget);
        sh_res_lbl->setObjectName(QString::fromUtf8("sh_res_lbl"));
        sh_res_lbl->setGeometry(QRect(30, 380, 231, 21));
        CAD_to_path->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CAD_to_path);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 752, 17));
        CAD_to_path->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CAD_to_path);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CAD_to_path->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CAD_to_path);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CAD_to_path->setStatusBar(statusBar);

        retranslateUi(CAD_to_path);

        QMetaObject::connectSlotsByName(CAD_to_path);
    } // setupUi

    void retranslateUi(QMainWindow *CAD_to_path)
    {
        CAD_to_path->setWindowTitle(QApplication::translate("CAD_to_path", "CAD_to_path", nullptr));
        ex_array->setText(QApplication::translate("CAD_to_path", "Extended Array Size", nullptr));
        mv_md_lbl->setText(QApplication::translate("CAD_to_path", "Movement Mode", nullptr));
        cart_vel->setText(QApplication::translate("CAD_to_path", "Cartisian Velocity", nullptr));
        ang_vel->setText(QApplication::translate("CAD_to_path", "Angular Velocity", nullptr));
        ori_lbl->setText(QApplication::translate("CAD_to_path", "Orientation", nullptr));
        or_mode1->setText(QApplication::translate("CAD_to_path", "Mode 1", nullptr));
        or_mode2->setText(QApplication::translate("CAD_to_path", "Mode 2", nullptr));
        or_mode3->setText(QApplication::translate("CAD_to_path", "Mode 3", nullptr));
        browse_bn->setText(QApplication::translate("CAD_to_path", "Browse DXF", nullptr));
        gen_pg_bn->setText(QApplication::translate("CAD_to_path", "Generate .pg", nullptr));
        exit_bn->setText(QApplication::translate("CAD_to_path", "Exit", nullptr));
        path_lbl->setText(QApplication::translate("CAD_to_path", "File Path", nullptr));
        rob_base_lbl->setText(QApplication::translate("CAD_to_path", "Robot Base Offset", nullptr));
        sh_res_lbl->setText(QApplication::translate("CAD_to_path", "Shape Resolution", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CAD_to_path: public Ui_CAD_to_path {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAD_TO_PATH_H
