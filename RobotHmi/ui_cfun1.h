/********************************************************************************
** Form generated from reading UI file 'cfun1.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFUN1_H
#define UI_CFUN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CFun1
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QFrame *line;
    QPushButton *btnAct1;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *CFun1)
    {
        if (CFun1->objectName().isEmpty())
            CFun1->setObjectName(QStringLiteral("CFun1"));
        CFun1->resize(550, 33);
        gridLayout = new QGridLayout(CFun1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(CFun1);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("QWidget#widget{background-color: rgb(255, 255, 255);border:1px solid gray }"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 3, -1, 3);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 85, 255);"));

        horizontalLayout->addWidget(label);

        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        btnAct1 = new QPushButton(widget);
        btnAct1->setObjectName(QStringLiteral("btnAct1"));
        btnAct1->setFlat(true);

        horizontalLayout->addWidget(btnAct1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(CFun1);

        QMetaObject::connectSlotsByName(CFun1);
    } // setupUi

    void retranslateUi(QWidget *CFun1)
    {
        CFun1->setWindowTitle(QApplication::translate("CFun1", "CFun1", 0));
        label->setText(QApplication::translate("CFun1", " \346\234\272\345\231\250\344\272\272\347\256\241\347\220\206 ", 0));
        btnAct1->setText(QApplication::translate("CFun1", "\346\234\272\345\231\250\344\272\272\347\256\241\347\220\206", 0));
    } // retranslateUi

};

namespace Ui {
    class CFun1: public Ui_CFun1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFUN1_H
