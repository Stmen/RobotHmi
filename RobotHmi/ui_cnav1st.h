/********************************************************************************
** Form generated from reading UI file 'cnav1st.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CNAV1ST_H
#define UI_CNAV1ST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CNav1st
{
public:
    QGridLayout *gridLayout;
    QPushButton *btnUp;
    QScrollArea *scrollArea;
    QWidget *scrollWidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btnFun1;
    QPushButton *btnFun2;
    QPushButton *btnFun3;
    QPushButton *btnFun4;
    QPushButton *btnFun5;
    QPushButton *btnFun6;
    QPushButton *btnFun7;
    QPushButton *btnFun8;
    QSpacerItem *verticalSpacer;
    QPushButton *btnDown;

    void setupUi(QWidget *CNav1st)
    {
        if (CNav1st->objectName().isEmpty())
            CNav1st->setObjectName(QStringLiteral("CNav1st"));
        CNav1st->resize(250, 400);
        gridLayout = new QGridLayout(CNav1st);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnUp = new QPushButton(CNav1st);
        btnUp->setObjectName(QStringLiteral("btnUp"));

        gridLayout->addWidget(btnUp, 0, 0, 1, 1);

        scrollArea = new QScrollArea(CNav1st);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShadow(QFrame::Sunken);
        scrollArea->setLineWidth(1);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        scrollWidget = new QWidget();
        scrollWidget->setObjectName(QStringLiteral("scrollWidget"));
        scrollWidget->setGeometry(QRect(0, 0, 248, 352));
        scrollWidget->setStyleSheet(QStringLiteral("QWidget#scrollWidget{background-color: rgb(255, 255, 255);}"));
        gridLayout_2 = new QGridLayout(scrollWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(6);
        gridLayout_2->setContentsMargins(0, 6, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnFun1 = new QPushButton(scrollWidget);
        btnFun1->setObjectName(QStringLiteral("btnFun1"));

        verticalLayout->addWidget(btnFun1);

        btnFun2 = new QPushButton(scrollWidget);
        btnFun2->setObjectName(QStringLiteral("btnFun2"));

        verticalLayout->addWidget(btnFun2);

        btnFun3 = new QPushButton(scrollWidget);
        btnFun3->setObjectName(QStringLiteral("btnFun3"));

        verticalLayout->addWidget(btnFun3);

        btnFun4 = new QPushButton(scrollWidget);
        btnFun4->setObjectName(QStringLiteral("btnFun4"));

        verticalLayout->addWidget(btnFun4);

        btnFun5 = new QPushButton(scrollWidget);
        btnFun5->setObjectName(QStringLiteral("btnFun5"));

        verticalLayout->addWidget(btnFun5);

        btnFun6 = new QPushButton(scrollWidget);
        btnFun6->setObjectName(QStringLiteral("btnFun6"));

        verticalLayout->addWidget(btnFun6);

        btnFun7 = new QPushButton(scrollWidget);
        btnFun7->setObjectName(QStringLiteral("btnFun7"));

        verticalLayout->addWidget(btnFun7);

        btnFun8 = new QPushButton(scrollWidget);
        btnFun8->setObjectName(QStringLiteral("btnFun8"));

        verticalLayout->addWidget(btnFun8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        scrollArea->setWidget(scrollWidget);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 1);

        btnDown = new QPushButton(CNav1st);
        btnDown->setObjectName(QStringLiteral("btnDown"));

        gridLayout->addWidget(btnDown, 2, 0, 1, 1);


        retranslateUi(CNav1st);

        QMetaObject::connectSlotsByName(CNav1st);
    } // setupUi

    void retranslateUi(QWidget *CNav1st)
    {
        CNav1st->setWindowTitle(QApplication::translate("CNav1st", "CNav1st", 0));
        btnUp->setText(QApplication::translate("CNav1st", "PushButton", 0));
        btnFun1->setText(QApplication::translate("CNav1st", "PushButton", 0));
        btnFun2->setText(QApplication::translate("CNav1st", "PushButton", 0));
        btnFun3->setText(QApplication::translate("CNav1st", "PushButton", 0));
        btnFun4->setText(QApplication::translate("CNav1st", "PushButton", 0));
        btnFun5->setText(QApplication::translate("CNav1st", "PushButton", 0));
        btnFun6->setText(QApplication::translate("CNav1st", "PushButton", 0));
        btnFun7->setText(QApplication::translate("CNav1st", "PushButton", 0));
        btnFun8->setText(QApplication::translate("CNav1st", "PushButton", 0));
        btnDown->setText(QApplication::translate("CNav1st", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class CNav1st: public Ui_CNav1st {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CNAV1ST_H
