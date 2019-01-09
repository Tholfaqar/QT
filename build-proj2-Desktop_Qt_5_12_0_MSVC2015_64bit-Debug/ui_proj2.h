/********************************************************************************
** Form generated from reading UI file 'proj2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJ2_H
#define UI_PROJ2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_proj2
{
public:
    QWidget *centralWidget;
    QPushButton *browse_bn;
    QLineEdit *path_tb;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *proj2)
    {
        if (proj2->objectName().isEmpty())
            proj2->setObjectName(QString::fromUtf8("proj2"));
        proj2->resize(400, 300);
        centralWidget = new QWidget(proj2);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        browse_bn = new QPushButton(centralWidget);
        browse_bn->setObjectName(QString::fromUtf8("browse_bn"));
        browse_bn->setGeometry(QRect(280, 100, 75, 23));
        path_tb = new QLineEdit(centralWidget);
        path_tb->setObjectName(QString::fromUtf8("path_tb"));
        path_tb->setGeometry(QRect(10, 100, 251, 20));
        proj2->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(proj2);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        proj2->setMenuBar(menuBar);
        mainToolBar = new QToolBar(proj2);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        proj2->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(proj2);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        proj2->setStatusBar(statusBar);

        retranslateUi(proj2);

        QMetaObject::connectSlotsByName(proj2);
    } // setupUi

    void retranslateUi(QMainWindow *proj2)
    {
        proj2->setWindowTitle(QApplication::translate("proj2", "proj2", nullptr));
        browse_bn->setText(QApplication::translate("proj2", "Browse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class proj2: public Ui_proj2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJ2_H
