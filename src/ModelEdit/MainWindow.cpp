#include "MainWindow.h"
#include <osgDB/ReadFile>
#include <QMenuBar>
#include "Core.h"
#include "TextureRolling.h"
#include <osgDB/ReadFile>
#include "MECore/FileUtils.h"
#include "MECore/GraphicsView.h"
#include <osg/DisplaySettings>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	GraphicsView* pView = new GraphicsView(this);
	setCentralWidget(pView);
	Core::ins()->init(pView);
	osg::DisplaySettings::instance()->setNumMultiSamples(16);
	initScene();
}

void MainWindow::initScene()
{
	initSimon();
	//initKestiny();
	Core::ins()->getManipulator()->home(0);
}

void MainWindow::initSimon()
{
	TextureRolling* rolling = new TextureRolling;
	Core::ins()->getSceneData()->addChild(rolling);
}

void MainWindow::initKestiny()
{
	// ��ʼ��������
	m_pAppTitle = new AppHeadeTitle;
	m_pTitleWidget = Core::ins()->getGraphScene()->addWidget(m_pAppTitle);
	m_pTitleWidget->show();
	m_pTitleWidget->setGeometry(QRect(0, 0, this->width(), 90));

	Core::ins()->getSceneData()->addChild(osgDB::readNodeFile(
		FileUtils::ins()->getPath(std::string("Data/Models/cow.osg"))));
}
