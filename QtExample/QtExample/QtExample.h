#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtExample.h"

class QtExample : public QMainWindow
{
    Q_OBJECT

public:
    QtExample(QWidget *parent = nullptr);
    ~QtExample();

private:
    Ui::QtExampleClass ui;
};
