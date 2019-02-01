/********************************************************************************
** Form generated from reading UI file 'updatestuui2.ui'
**
** Created: Tue Jul 10 14:34:30 2018
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATESTUUI2_H
#define UI_UPDATESTUUI2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updatestuui2
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_2;
    QToolButton *toolButton_2;
    QToolButton *toolButton;

    void setupUi(QDialog *updatestuui2)
    {
        if (updatestuui2->objectName().isEmpty())
            updatestuui2->setObjectName(QString::fromUtf8("updatestuui2"));
        updatestuui2->resize(242, 230);
        QIcon icon;
        icon.addFile(QString::fromUtf8("res/007.png"), QSize(), QIcon::Normal, QIcon::Off);
        updatestuui2->setWindowIcon(icon);
        layoutWidget = new QWidget(updatestuui2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 20, 161, 161));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 3, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 4, 1, 1, 1);

        layoutWidget_2 = new QWidget(updatestuui2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(50, 200, 141, 24));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        toolButton_2 = new QToolButton(layoutWidget_2);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));

        gridLayout_2->addWidget(toolButton_2, 0, 2, 1, 1);

        toolButton = new QToolButton(layoutWidget_2);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        gridLayout_2->addWidget(toolButton, 0, 1, 1, 1);


        retranslateUi(updatestuui2);

        QMetaObject::connectSlotsByName(updatestuui2);
    } // setupUi

    void retranslateUi(QDialog *updatestuui2)
    {
        updatestuui2->setWindowTitle(QApplication::translate("updatestuui2", "\344\277\256\346\224\271\345\255\246\347\224\237", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("updatestuui2", "\345\255\246\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("updatestuui2", "\345\247\223\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("updatestuui2", "\347\217\255\347\272\247\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("updatestuui2", "\346\200\247\345\210\253\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("updatestuui2", "\345\271\264\351\276\204\357\274\232", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("updatestuui2", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("updatestuui2", "\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class updatestuui2: public Ui_updatestuui2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATESTUUI2_H
