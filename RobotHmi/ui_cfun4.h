/********************************************************************************
** Form generated from reading UI file 'cfun4.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFUN4_H
#define UI_CFUN4_H

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

class Ui_CFun4
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
    QFrame *line_4;
    QPushButton *btnAct2;
    QFrame *line_5;
    QPushButton *btnAct3;
    QSpacerItem *horizontalSpacer;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QFrame *line_2;
    QPushButton *btnAct4;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QFrame *line_6;
    QPushButton *btnAct5;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *CFun4)
    {
        if (CFun4->objectName().isEmpty())
            CFun4->setObjectName(QStringLiteral("CFun4"));
        CFun4->resize(550, 101);
        CFun4->setStyleSheet(QStringLiteral("QWidget#CFun4{background-color: rgb(255, 255, 255);}"));
        gridLayout = new QGridLayout(CFun4);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(CFun4);
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

        line_4 = new QFrame(widget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_4);

        btnAct2 = new QPushButton(widget);
        btnAct2->setObjectName(QStringLiteral("btnAct2"));
        btnAct2->setFlat(true);

        horizontalLayout->addWidget(btnAct2);

        line_5 = new QFrame(widget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_5);

        btnAct3 = new QPushButton(widget);
        btnAct3->setObjectName(QStringLiteral("btnAct3"));
        btnAct3->setFlat(true);

        horizontalLayout->addWidget(btnAct3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        line_3 = new QFrame(widget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 85, 255);"));

        horizontalLayout_2->addWidget(label_2);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        btnAct4 = new QPushButton(widget);
        btnAct4->setObjectName(QStringLiteral("btnAct4"));
        btnAct4->setFlat(true);

        horizontalLayout_2->addWidget(btnAct4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        line_8 = new QFrame(widget);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 85, 255);"));

        horizontalLayout_3->addWidget(label_3);

        line_6 = new QFrame(widget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_6);

        btnAct5 = new QPushButton(widget);
        btnAct5->setObjectName(QStringLiteral("btnAct5"));
        btnAct5->setFlat(true);

        horizontalLayout_3->addWidget(btnAct5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(CFun4);

        QMetaObject::connectSlotsByName(CFun4);
    } // setupUi

    void retranslateUi(QWidget *CFun4)
    {
        CFun4->setWindowTitle(QApplication::translate("CFun4", "CFun4", 0));
        label->setText(QApplication::translate("CFun4", "\350\256\276\345\244\207\345\221\212\350\255\246\344\277\241\346\201\257\347\241\256\350\256\244", 0));
        btnAct1->setText(QApplication::translate("CFun4", "\350\256\276\345\244\207\345\221\212\350\255\246\346\237\245\350\257\242\347\241\256\350\256\244", 0));
        btnAct2->setText(QApplication::translate("CFun4", "\344\270\273\346\216\245\347\272\277\345\261\225\347\244\272", 0));
        btnAct3->setText(QApplication::translate("CFun4", "\351\227\264\351\232\224\345\261\225\347\244\272", 0));
        label_2->setText(QApplication::translate("CFun4", "\345\267\241\346\243\200\347\273\223\346\236\234\346\265\217\350\247\210      ", 0));
        btnAct4->setText(QApplication::translate("CFun4", "\345\267\241\346\243\200\347\273\223\346\236\234\346\265\217\350\247\210", 0));
        label_3->setText(QApplication::translate("CFun4", "\345\267\241\346\243\200\346\212\245\345\221\212\347\224\237\346\210\220      ", 0));
        btnAct5->setText(QApplication::translate("CFun4", "\345\267\241\346\243\200\346\212\245\345\221\212\347\224\237\346\210\220", 0));
    } // retranslateUi

};

namespace Ui {
    class CFun4: public Ui_CFun4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFUN4_H
