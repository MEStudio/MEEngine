#include "MainWindow.h"
#include <iostream>
#include <QApplication>
#include <QTime>
#include "MECore/Core.h"
#include "MECore/FileUtils.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FileUtils::ins()->init(QApplication::applicationDirPath().append("/../"));
	// ����qss�ļ�
	QFile file(FileUtils::ins()->getPath(QString("data/skin/ModeEdit.qss")));
	if (!file.open(QIODevice::ReadOnly))
	{
		std::cout << "��ע�⣬ȱ��Ƥ���ļ�:" << FileUtils::ins()->getPath(std::string("skin/ModeEdit.qss")) << std::endl;
	}

	QString strContent = QString::fromUtf8(file.readAll());
	a.setStyleSheet(strContent);
	file.close();

	// ���������
	qsrand(QTime::currentTime().msec());

	MainWindow w;
	w.showMaximized();
	return a.exec();
}
