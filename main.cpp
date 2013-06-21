#include "WidgetMain.h"
#include <QApplication>
#include <QFileInfo>
//#include "Log4Qt/logger.h"
//#include "Log4Qt/BasicConfigurator"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	WidgetMain w;
#ifdef Q_OS_MAC
	w.setWindowIcon(QIcon("v095_logo_macx.icns"));//竟然没有用啊
#elif defined(Q_OS_WIN32)
	w.setWindowIcon(QIcon("./resource/images/icon/v095_logop_4_48x48x8.png"));//竟然没有用啊
#endif

	w.setWindowTitle("Mind+ Upgrading");
	w.show();

	return a.exec();
}
