#pragma once

#include "ui_QtExample.h"
#include "lib.h"

class QtExample : public QMainWindow
{
    Q_OBJECT

public:
    QtExample(QWidget *parent = nullptr);
    ~QtExample();


private:
    Ui::QtExampleClass ui;
	bool eventFilter(QObject *obj, QEvent *e);

};
