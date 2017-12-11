#ifndef GEOMETRYPIPE_H
#define GEOMETRYPIPE_H

#include "Export.h"
#include "GeometryBase.h"

class DLL_EXPORT GeometryPipe: public GeometryBase, public StyleBase
{
public:
	GeometryPipe();
	GeometryPipe(osg::Vec3Array* points);
	~GeometryPipe();

private:
	void updateStyle();

	void updateGeomtry();
	
	void createPipe();

	//ͨ�����߲�ֵԲ��
	void interpolationCicle(const osg::Vec3Array* curve);

	//�������߼��㶥������
	void clacIndex(int count);

private:
	int  m_numParts; //Բ�ܲ�ֵ�ֶ���
	osg::ref_ptr<osg::UIntArray> m_pIndexs;
};

#endif//GEOMETRYPIPE_H