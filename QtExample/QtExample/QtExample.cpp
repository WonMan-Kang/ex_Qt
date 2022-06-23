#include "QtExample.h"

QtExample::QtExample(QWidget *parent) : QMainWindow(parent)
{
    ui.setupUi(this);

    setWindowTitle("QtExample");

	ui.label->installEventFilter(this);
	ui.pushButton->installEventFilter(this);
}

QtExample::~QtExample()
{

}

bool QtExample::eventFilter(QObject *obj, QEvent *e)
{
	int key;
	QString objName = obj->objectName();
	QKeyEvent *keyEvent = static_cast<QKeyEvent*>(e);
	QEvent::Type eventType = keyEvent->type();

	if(eventType==QEvent::KeyPress)
    {

		if(objName=="pushButton"){
			printf("keyPress : pushButton\n");
		}else{
			printf("none\n");
		}
	}
	else if(eventType==QEvent::MouseButtonRelease)
	{
		if(objName=="pushButton"){
			printf("mouseClick : pushButton\n");
		}else if(objName=="label"){
			printf("mouseClick : label\n");
		}else{
			printf("none\n");
		}
	}

	return QObject::eventFilter(obj, e);
}


