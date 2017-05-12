#ifndef MEMATH_H
#define MEMATH_H
#include "Export.h"
#include <osg/Vec3>
#include <osg/Array>

class MECORE_EXPORT MEMath
{
public:
	MEMath();
	~MEMath();

	//����һϵ�����߶ε��ܳ���
	static float getLength(osg::Vec3Array* source);

	//�ж��߶�AB, CD�Ƿ��ཻ�������ǲ���5;
	inline static bool intersect(osg::Vec3 posA, osg::Vec3 posB,
		osg::Vec3 posC, osg::Vec3 posD, osg::Vec3& posInter);

	//����һ�����,���������Ŀ�Ⱥ��е������;����ֵ�ֳ���ߵĵ㣨����3�����ұߵĵ㣨����4��
	static bool createStrip(float radius, osg::Vec3Array* source, 
		osg::Vec3Array* lefts, osg::Vec3Array* rights);
};

#endif//MEMATH_H