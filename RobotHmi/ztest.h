#ifndef ZTEST_H
#define ZTEST_H

#include <QWidget>
#include "ui_ztest.h"

class ZTest : public QWidget
{
	Q_OBJECT

public:
	ZTest(QWidget *parent = 0);
	~ZTest();

    void SetLabelText(QString text) { ui.label->setText(text); }

private:
	Ui::ZTest ui;
};

#endif // ZTEST_H
