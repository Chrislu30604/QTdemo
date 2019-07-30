/********************************************************************************
** Form generated from reading UI file 'VsQT.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSQT_H
#define UI_VSQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VsQTClass
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;

    void setupUi(QWidget *VsQTClass)
    {
        if (VsQTClass->objectName().isEmpty())
            VsQTClass->setObjectName(QString::fromUtf8("VsQTClass"));
        VsQTClass->resize(584, 341);
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        VsQTClass->setFont(font);
        VsQTClass->setStyleSheet(QString::fromUtf8("background-color:#474747;"));
        groupBox = new QGroupBox(VsQTClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 40, 491, 261));
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("color:white"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 180, 121, 51));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("color:white;"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 50, 61, 31));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:white;"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 110, 61, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:white;"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 180, 261, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("border-style:none;"));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 40, 311, 41));
        lineEdit_2->setFont(font);
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(140, 100, 311, 41));
        lineEdit_3->setFont(font);

        retranslateUi(VsQTClass);

        QMetaObject::connectSlotsByName(VsQTClass);
    } // setupUi

    void retranslateUi(QWidget *VsQTClass)
    {
        VsQTClass->setWindowTitle(QApplication::translate("VsQTClass", "VsQT", nullptr));
        groupBox->setTitle(QApplication::translate("VsQTClass", "BMI Calculator", nullptr));
        pushButton->setText(QApplication::translate("VsQTClass", "Calc", nullptr));
        label->setText(QApplication::translate("VsQTClass", "Height", nullptr));
        label_2->setText(QApplication::translate("VsQTClass", "Weight", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VsQTClass: public Ui_VsQTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSQT_H
