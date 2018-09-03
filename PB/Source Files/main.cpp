#include "Header Files/PBMainWindow.h"

// Qt
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PBMainWindow w;
	w.show();
	return a.exec();
}
