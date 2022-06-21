#pragma once

#include "ui_QtExample.h"
#include "stdafx.h"

class QtExample : public QMainWindow
{
    Q_OBJECT

public:
    QtExample(QWidget *parent = nullptr);
    ~QtExample();

private:
    Ui::QtExampleClass ui;
};
