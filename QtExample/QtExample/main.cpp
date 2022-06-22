#include "lib.h"
#include "QtExample.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	a.installEventFilter(new QEventFilter());

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
