#include "MainWindow.h"
#include <iostream>
#include <QApplication>
#include <QTime>
#include "Core.h"
#include "MECore/FileUtils.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FileUtils::ins()->init(QApplication::applicationDirPath().append("/../"));
	// ����qss�ļ�
	QFile file(FileUtils::ins()->getPath("data/skin/ModeEdit.qss"));
	if (!file.open(QIODevice::ReadOnly))
	{
		std::cout << "��ע�⣬ȱ��Ƥ���ļ�:" << FileUtils::ins()->getPath("skin/ModeEdit.qss").toStdString() << std::endl;
	}

	QString strContent = QString::fromUtf8(file.readAll());
	a.setStyleSheet(strContent);
	file.close();

	// ���������
	qsrand(QTime::currentTime().msec());

	MainWindow w;
	w.show();
	return a.exec();
}
