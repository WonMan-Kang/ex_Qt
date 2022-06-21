#include "QEventFilter.h"

QEventFilter::QEventFilter(QObject *parent) : QObject(parent) { }
QEventFilter::~QEventFilter() { }

bool QEventFilter::eventFilter(QObject *obj, QEvent *e)
{
	int key;
	QString objName;
	QString objClassName;

	QPushButton *qButton;
	QKeyEvent *keyEvent = static_cast<QKeyEvent*>(e);
	QEvent::Type eventType = keyEvent->type();

	if(eventType==QEvent::KeyPress)
    {
		key = keyEvent->key();
		objName = obj->objectName();
		objClassName = QString(obj->metaObject()->className());

		if(key==Qt::Key_Return){
			if(objClassName=="QPushButton"){
				qButton = qobject_cast<QPushButton*>(obj);
				qButton->clicked();
			}
		}else if(keyEvent->matches(QKeySequence::Copy)==true){
			printf("key press : copy\n");
		}
	}


    return QObject::eventFilter(obj, e);
}


