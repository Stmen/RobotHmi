/********************************************************************************
** Form generated from reading UI file 'ccenter.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCENTER_H
#define UI_CCENTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CCenter
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;

    void setupUi(QWidget *CCenter)
    {
        if (CCenter->objectName().isEmpty())
            CCenter->setObjectName(QStringLiteral("CCenter"));
        CCenter->resize(789, 472);
        gridLayout = new QGridLayout(CCenter);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(CCenter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setIconSize(QSize(28, 28));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(true);

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(CCenter);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(CCenter);
    } // setupUi

    void retranslateUi(QWidget *CCenter)
    {
        CCenter->setWindowTitle(QApplication::translate("CCenter", "CCenter", 0));
    } // retranslateUi

};

namespace Ui {
    class CCenter: public Ui_CCenter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCENTER_H
