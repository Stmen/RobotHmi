/********************************************************************************
** Form generated from reading UI file 'robothmi.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTHMI_H
#define UI_ROBOTHMI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RobotHmiClass
{
public:

    void setupUi(QWidget *RobotHmiClass)
    {
        if (RobotHmiClass->objectName().isEmpty())
            RobotHmiClass->setObjectName(QStringLiteral("RobotHmiClass"));
        RobotHmiClass->resize(647, 466);

        retranslateUi(RobotHmiClass);

        QMetaObject::connectSlotsByName(RobotHmiClass);
    } // setupUi

    void retranslateUi(QWidget *RobotHmiClass)
    {
        RobotHmiClass->setWindowTitle(QApplication::translate("RobotHmiClass", "RobotHmi", 0));
    } // retranslateUi

};

namespace Ui {
    class RobotHmiClass: public Ui_RobotHmiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTHMI_H
