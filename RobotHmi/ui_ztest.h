/********************************************************************************
** Form generated from reading UI file 'ztest.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZTEST_H
#define UI_ZTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZTest
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QWidget *ZTest)
    {
        if (ZTest->objectName().isEmpty())
            ZTest->setObjectName(QStringLiteral("ZTest"));
        ZTest->resize(551, 382);
        gridLayout = new QGridLayout(ZTest);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(ZTest);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 48pt \"\345\256\213\344\275\223\";"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ZTest);

        QMetaObject::connectSlotsByName(ZTest);
    } // setupUi

    void retranslateUi(QWidget *ZTest)
    {
        ZTest->setWindowTitle(QApplication::translate("ZTest", "ZTest", 0));
        label->setText(QApplication::translate("ZTest", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class ZTest: public Ui_ZTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZTEST_H
