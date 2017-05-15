#ifndef MEMATH_H
#define MEMATH_H
#include "Export.h"
#include <osg/Vec3>
#include <osg/Array>

class MECORE_EXPORT MEMath
{
	//�������ͣ� �߶�
	typedef std::pair<osg::Vec3, osg::Vec3> Segment;
public:
	MEMath();
	~MEMath();

	//����һϵ�����߶ε��ܳ���
	static float getLength(osg::Vec3Array* source);

	//�ж��߶�AB, CD�Ƿ��ཻ�������ǲ���5;
	inline static bool intersectSegm(osg::Vec3 posA, osg::Vec3 posB,
		osg::Vec3 posC, osg::Vec3 posD, osg::Vec3& posInter);

	//�ж�ֱ��AB, CD�Ƿ��ཻ�������ǲ���5;
	inline static bool intersectLine(osg::Vec3 posA, osg::Vec3 posB,
		osg::Vec3 posC, osg::Vec3 posD, osg::Vec3& posInter);

	//����һ���ս�Ϊб�ߵ����,���������Ŀ�Ⱥ��е������;����ֵ�ֳ���ߵĵ㣨����3�����ұߵĵ㣨����4��
	static bool createStripBevel(float radius, osg::Vec3Array* source, 
		osg::Vec3Array* lefts, osg::Vec3Array* rights);

	//����һ���ս�ΪԲ�ߵ����,���������Ŀ�Ⱥ��е������;����ֵ�ֳ���ߵĵ㣨����3�����ұߵĵ㣨����4��
	static bool createStripRound(float radius, osg::Vec3Array* source,
		osg::Vec3Array* lefts, osg::Vec3Array* rights);

	//���������߲�ֵ�� ����1����ֵ�����飬����2����ֵ�뾶
	static osg::Vec3Array* BezierCurve(osg::Vec3Array* array, float radius);

};

#endif//MEMATH_H