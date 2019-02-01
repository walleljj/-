/********************************************************************************
** Form generated from reading UI file 'gxtxl_3.ui'
**
** Created: Tue Jul 10 14:34:31 2018
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GXTXL_3_H
#define UI_GXTXL_3_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GXTXL_3Class
{
public:
    QAction *addStu;
    QAction *addClass;
    QAction *changeStu;
    QAction *changeClass;
    QAction *lookClass;
    QAction *lookMassage;
    QAction *lookStudent;
    QAction *changeM;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLineEdit *lineEdit;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QTreeWidget *treeWidget;
    QTreeWidget *treeWidget_2;
    QTreeWidget *treeWidget_3;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_4;
    QMenu *menu_S;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GXTXL_3Class)
    {
        if (GXTXL_3Class->objectName().isEmpty())
            GXTXL_3Class->setObjectName(QString::fromUtf8("GXTXL_3Class"));
        GXTXL_3Class->resize(846, 564);
        QIcon icon;
        icon.addFile(QString::fromUtf8("res/001.png"), QSize(), QIcon::Normal, QIcon::Off);
        GXTXL_3Class->setWindowIcon(icon);
        addStu = new QAction(GXTXL_3Class);
        addStu->setObjectName(QString::fromUtf8("addStu"));
        addClass = new QAction(GXTXL_3Class);
        addClass->setObjectName(QString::fromUtf8("addClass"));
        changeStu = new QAction(GXTXL_3Class);
        changeStu->setObjectName(QString::fromUtf8("changeStu"));
        changeClass = new QAction(GXTXL_3Class);
        changeClass->setObjectName(QString::fromUtf8("changeClass"));
        lookClass = new QAction(GXTXL_3Class);
        lookClass->setObjectName(QString::fromUtf8("lookClass"));
        lookMassage = new QAction(GXTXL_3Class);
        lookMassage->setObjectName(QString::fromUtf8("lookMassage"));
        lookStudent = new QAction(GXTXL_3Class);
        lookStudent->setObjectName(QString::fromUtf8("lookStudent"));
        changeM = new QAction(GXTXL_3Class);
        changeM->setObjectName(QString::fromUtf8("changeM"));
        centralWidget = new QWidget(GXTXL_3Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(410, 470, 411, 51));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 20, 47, 17));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(80, 20, 47, 17));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 20, 161, 20));
        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(318, 10, 61, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("res/006.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);
        toolButton_2 = new QToolButton(groupBox);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setGeometry(QRect(318, 11, 61, 30));
        toolButton_2->setIcon(icon1);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 470, 381, 51));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 341, 21));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_3 = new QRadioButton(layoutWidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        gridLayout->addWidget(radioButton_3, 0, 0, 1, 1);

        radioButton_4 = new QRadioButton(layoutWidget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        gridLayout->addWidget(radioButton_4, 0, 1, 1, 1);

        radioButton_5 = new QRadioButton(layoutWidget);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        gridLayout->addWidget(radioButton_5, 0, 2, 1, 1);

        treeWidget = new QTreeWidget(centralWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 841, 461));
        treeWidget->setAlternatingRowColors(true);
        treeWidget_2 = new QTreeWidget(centralWidget);
        treeWidget_2->setObjectName(QString::fromUtf8("treeWidget_2"));
        treeWidget_2->setGeometry(QRect(0, 0, 841, 461));
        treeWidget_2->setAlternatingRowColors(true);
        treeWidget_2->header()->setStretchLastSection(true);
        treeWidget_3 = new QTreeWidget(centralWidget);
        treeWidget_3->setObjectName(QString::fromUtf8("treeWidget_3"));
        treeWidget_3->setGeometry(QRect(0, 0, 851, 531));
        GXTXL_3Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GXTXL_3Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 846, 22));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_S = new QMenu(menuBar);
        menu_S->setObjectName(QString::fromUtf8("menu_S"));
        GXTXL_3Class->setMenuBar(menuBar);
        statusBar = new QStatusBar(GXTXL_3Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        GXTXL_3Class->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_S->menuAction());
        menu->addAction(addStu);
        menu->addAction(addClass);
        menu_2->addAction(changeStu);
        menu_2->addAction(changeM);
        menu_2->addAction(changeClass);
        menu_4->addAction(lookStudent);
        menu_4->addAction(lookMassage);
        menu_4->addAction(lookClass);

        retranslateUi(GXTXL_3Class);

        QMetaObject::connectSlotsByName(GXTXL_3Class);
    } // setupUi

    void retranslateUi(QMainWindow *GXTXL_3Class)
    {
        GXTXL_3Class->setWindowTitle(QApplication::translate("GXTXL_3Class", "\351\253\230\346\240\241\351\200\232\350\256\257\345\275\225\347\256\241\347\220\206\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        addStu->setText(QApplication::translate("GXTXL_3Class", "\346\267\273\345\212\240\345\255\246\347\224\237", 0, QApplication::UnicodeUTF8));
        addClass->setText(QApplication::translate("GXTXL_3Class", "\346\267\273\345\212\240\347\217\255\347\272\247", 0, QApplication::UnicodeUTF8));
        changeStu->setText(QApplication::translate("GXTXL_3Class", "\344\277\256\346\224\271\345\255\246\347\224\237", 0, QApplication::UnicodeUTF8));
        changeClass->setText(QApplication::translate("GXTXL_3Class", "\344\277\256\346\224\271\347\217\255\347\272\247", 0, QApplication::UnicodeUTF8));
        lookClass->setText(QApplication::translate("GXTXL_3Class", "\346\237\245\347\234\213\347\217\255\347\272\247", 0, QApplication::UnicodeUTF8));
        lookMassage->setText(QApplication::translate("GXTXL_3Class", "\346\237\245\347\234\213\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        lookStudent->setText(QApplication::translate("GXTXL_3Class", "\346\237\245\347\234\213\345\255\246\347\224\237", 0, QApplication::UnicodeUTF8));
        changeM->setText(QApplication::translate("GXTXL_3Class", "\344\277\256\346\224\271\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("GXTXL_3Class", "\346\237\245\350\257\242\346\235\241\344\273\266", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("GXTXL_3Class", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("GXTXL_3Class", "\347\217\255\347\272\247", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("GXTXL_3Class", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("GXTXL_3Class", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("GXTXL_3Class", "\346\216\222\345\272\217\346\226\271\345\274\217", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("GXTXL_3Class", "\345\255\246\345\217\267", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("GXTXL_3Class", "\347\217\255\347\272\247", 0, QApplication::UnicodeUTF8));
        radioButton_5->setText(QApplication::translate("GXTXL_3Class", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("GXTXL_3Class", "\345\271\264\351\276\204", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("GXTXL_3Class", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("GXTXL_3Class", "\347\217\255\347\272\247\345\217\267", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("GXTXL_3Class", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("GXTXL_3Class", "\345\255\246\345\217\267", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget_2->headerItem();
        ___qtreewidgetitem1->setText(9, QApplication::translate("GXTXL_3Class", "\351\202\256\347\274\226", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(8, QApplication::translate("GXTXL_3Class", "\351\202\256\347\256\261", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(7, QApplication::translate("GXTXL_3Class", "\347\224\265\350\257\235", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(6, QApplication::translate("GXTXL_3Class", "\346\210\267\347\261\215", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(5, QApplication::translate("GXTXL_3Class", "\350\272\253\344\273\275\350\257\201\345\217\267", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(4, QApplication::translate("GXTXL_3Class", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(3, QApplication::translate("GXTXL_3Class", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(2, QApplication::translate("GXTXL_3Class", "\347\217\255\347\272\247\345\217\267", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(1, QApplication::translate("GXTXL_3Class", "\345\255\246\345\217\267", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("GXTXL_3Class", "id", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget_3->headerItem();
        ___qtreewidgetitem2->setText(4, QApplication::translate("GXTXL_3Class", "\347\217\255\344\270\273\344\273\273", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(3, QApplication::translate("GXTXL_3Class", "\347\217\255\351\225\277", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(2, QApplication::translate("GXTXL_3Class", "\345\255\246\347\224\237\344\272\272\346\225\260", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(1, QApplication::translate("GXTXL_3Class", "\347\217\255\345\220\215", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(0, QApplication::translate("GXTXL_3Class", "\347\217\255\347\272\247\345\217\267", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("GXTXL_3Class", "\345\242\236\345\212\240(&I)", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("GXTXL_3Class", "\344\277\256\346\224\271(&B)", 0, QApplication::UnicodeUTF8));
        menu_4->setTitle(QApplication::translate("GXTXL_3Class", "\346\237\245\347\234\213(&C)", 0, QApplication::UnicodeUTF8));
        menu_S->setTitle(QApplication::translate("GXTXL_3Class", "\345\205\263\344\272\216(&A)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GXTXL_3Class: public Ui_GXTXL_3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GXTXL_3_H
