#ifndef SEGMENT_H
#define SEGMENT_H
#include <osg/Vec3>

class Segment
{
public:
	Segment(osg::Vec3 start, osg::Vec3 end);
	~Segment();

	//��λ����
	osg::Vec3 dir();

	//��ͨ����
	osg::Vec3 vector();

	float length();

private:
	osg::Vec3 m_startPos;
	osg::Vec3 m_endPos;
};

#endif//SEGMENT_H