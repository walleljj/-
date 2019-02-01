/********************************************************************************
** Form generated from reading UI file 'addclassui2.ui'
**
** Created: Tue Jul 10 14:34:32 2018
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCLASSUI2_H
#define UI_ADDCLASSUI2_H

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

class Ui_AddClassUi2
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QToolButton *toolButton_2;
    QToolButton *toolButton;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;

    void setupUi(QDialog *AddClassUi2)
    {
        if (AddClassUi2->objectName().isEmpty())
            AddClassUi2->setObjectName(QString::fromUtf8("AddClassUi2"));
        AddClassUi2->resize(255, 230);
        QIcon icon;
        icon.addFile(QString::fromUtf8("res/003.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddClassUi2->setWindowIcon(icon);
        layoutWidget = new QWidget(AddClassUi2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 190, 141, 24));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        toolButton_2 = new QToolButton(layoutWidget);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));

        gridLayout_2->addWidget(toolButton_2, 0, 2, 1, 1);

        toolButton = new QToolButton(layoutWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        gridLayout_2->addWidget(toolButton, 0, 1, 1, 1);

        layoutWidget_2 = new QWidget(AddClassUi2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(40, 10, 161, 161));
        gridLayout = new QGridLayout(layoutWidget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 2, 1, 1, 1);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        lineEdit_5 = new QLineEdit(layoutWidget_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 3, 1, 1, 1);


        retranslateUi(AddClassUi2);

        QMetaObject::connectSlotsByName(AddClassUi2);
    } // setupUi

    void retranslateUi(QDialog *AddClassUi2)
    {
        AddClassUi2->setWindowTitle(QApplication::translate("AddClassUi2", "\346\267\273\345\212\240\347\217\255\347\272\247", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("AddClassUi2", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("AddClassUi2", "\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddClassUi2", "\347\217\255\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddClassUi2", "\347\217\255\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AddClassUi2", "\347\217\255\351\225\277\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AddClassUi2", "\347\217\255\344\270\273\344\273\273\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddClassUi2: public Ui_AddClassUi2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCLASSUI2_H
