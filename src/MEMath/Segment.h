#ifndef SEGMENT_H
#define SEGMENT_H
#include <osg/Vec3>

class Segment
{
public:
	Segment(osg::Vec3 start, osg::Vec3 end);
	~Segment();

	osg::Vec3 dir();

	float length();

private:
	osg::Vec3 m_startPos;
	osg::Vec3 m_endPos;
};

#endif//SEGMENT_H