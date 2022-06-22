#include "QtExample.h"

QtExample::QtExample(QWidget *parent) : QMainWindow(parent)
{
    ui.setupUi(this);

    setWindowTitle("QtExample");

	connect(ui.pushButton, SIGNAL(clicked()), SLOT(pushButtonFunc()));
}

QtExample::~QtExample()
{

}

void QtExample::pushButtonFunc(void)
{
	printf("push\n");
	ui.label->setText("push");
}
