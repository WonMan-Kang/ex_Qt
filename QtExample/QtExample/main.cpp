#include "QtExample.h"
#include <QtWidgets/QApplication>
#include <qsharedmemory.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

	QSharedMemory shared("QtExample");
	if(!shared.create(512, QSharedMemory::ReadWrite)){
		printf("Error\n");
	}else{
		QtExample w;
		w.show();
		return a.exec();
	}
	
	return 1;
}
