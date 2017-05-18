#ifndef MEMATH_H
#define MEMATH_H
#include "Export.h"
#include <osg/Vec3>
#include <osg/Array>
#include "Segment.h"

class MECORE_EXPORT MEMath
{
	//��������: �߶�
public:
	MEMath();
	~MEMath();

	//����һϵ�����߶ε��ܳ���
	static float getLength(osg::Vec3Array* source);

	//�ж��߶�AB, CD�Ƿ��ཻ�������ǲ���5;
	inline static bool intersectSegm(osg::Vec3 posA, osg::Vec3 posB,
		osg::Vec3 posC, osg::Vec3 posD, osg::Vec3& posInter);

	//�ж�ֱ��AB, CD�Ƿ��ཻ�������ǲ���5;
	inline static bool intersectLine(osg::Vec3 posA1, osg::Vec3 posA2,
		osg::Vec3 posB1, osg::Vec3 posB2, osg::Vec3& posInter);

	//����һ���ս�Ϊб�ߵ����,���������Ŀ�Ⱥ��е������;����ֵ�ֳ���ߵĵ㣨����3�����ұߵĵ㣨����4��
	static bool createStripBevel(float radius, osg::Vec3Array* source, 
		osg::Vec3Array* lefts, osg::Vec3Array* rights);

	//����һ���ս�Ϊ��ǵ����,���������Ŀ�Ⱥ��е������;����ֵ�ֳ���ߵĵ㣨����3�����ұߵĵ㣨����4��
	static bool createStripMiter(float radius, osg::Vec3Array* source,
		osg::Vec3Array* lefts, osg::Vec3Array* rights);

	static osg::Vec2Array* clacStripTexCoord(osg::Vec3Array* source);

	//����
	static osg::Vec3Array* createPipe(osg::Vec3Array* source, float radius);

	//���������߲�ֵ�� ����1����ֵ�����飬����2����ֵ�뾶, ����3��ϸ�ֶ��ٶ�
	static osg::Vec3Array* BezierCurve(osg::Vec3Array* vertexs, float radius, size_t parts);

	//����һ��Բ�ܵ����飬 ����1��Բ�����꣬ ����2���뾶������3��Բ�ֶܷ���
	static osg::Vec3Array* createCircle(osg::Vec3 center, float radius, osg::Vec3 upDir, size_t parts = 10);
};

#endif//MEMATH_H