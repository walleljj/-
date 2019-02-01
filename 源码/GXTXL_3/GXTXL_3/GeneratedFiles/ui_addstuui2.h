/********************************************************************************
** Form generated from reading UI file 'addstuui2.ui'
**
** Created: Tue Jul 10 14:34:32 2018
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUUI2_H
#define UI_ADDSTUUI2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddstuUi2
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
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
    QGridLayout *gridLayout_2;
    QToolButton *toolButton_2;
    QToolButton *toolButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *AddstuUi2)
    {
        if (AddstuUi2->objectName().isEmpty())
            AddstuUi2->setObjectName(QString::fromUtf8("AddstuUi2"));
        AddstuUi2->resize(242, 234);
        QIcon icon;
        icon.addFile(QString::fromUtf8("res/003.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddstuUi2->setWindowIcon(icon);
        layoutWidget = new QWidget(AddstuUi2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 191, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
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


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        toolButton_2 = new QToolButton(layoutWidget);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));

        gridLayout_2->addWidget(toolButton_2, 0, 2, 1, 1);

        toolButton = new QToolButton(layoutWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        gridLayout_2->addWidget(toolButton, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(AddstuUi2);

        QMetaObject::connectSlotsByName(AddstuUi2);
    } // setupUi

    void retranslateUi(QDialog *AddstuUi2)
    {
        AddstuUi2->setWindowTitle(QApplication::translate("AddstuUi2", "\346\267\273\345\212\240\345\255\246\347\224\237", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddstuUi2", "\345\255\246\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddstuUi2", "\345\247\223\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddstuUi2", "\347\217\255\347\272\247\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AddstuUi2", "\346\200\247\345\210\253\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AddstuUi2", "\345\271\264\351\276\204\357\274\232", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("AddstuUi2", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("AddstuUi2", "\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddstuUi2: public Ui_AddstuUi2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUUI2_H
