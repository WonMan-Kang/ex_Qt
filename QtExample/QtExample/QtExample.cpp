#include "QtExample.h"

QtExample::QtExample(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    setWindowTitle("QtExample");
}

QtExample::~QtExample()
{}
