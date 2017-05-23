/*************************************************
// Copyright(C) MEEngine Team
// File name:    Core.h
// Author:       ����
// Version:      1.0
// Date:         2017-5-11
// Description:  
// History:
*************************************************/
#ifndef CORE_H
#define CORE_H
#include "Export.h"
#include "GraphicsView.h"
#include <QGraphicsScene>
#include <osg/Group>

class MECORE_EXPORT Core
{
public:
	static Core* ins();
	static void destory();

	//���ȼ���ߵĳ�ʼ��
	void init(GraphicsView* osgView);

	//
	GraphicsView* getOSGView();

	QGraphicsScene* getGraphScene();

	osgViewer::Viewer* getViewer();

	osg::Camera* getCamera();

	osg::Group* getSceneData();

	osgGA::CameraManipulator* getManipulator();

private:
	Core();
	~Core();

private:
	static Core* s_pSelf;
	GraphicsView* m_pOsgView;
	osgViewer::Viewer* m_pViewer;
	QGraphicsScene* m_pGraphScene;
	osg::Group* m_pSceneData;
};

#endif // MODELEDIT_CORE_H
