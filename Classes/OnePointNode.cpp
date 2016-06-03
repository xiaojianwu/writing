#include "OnePointNode.h"


OnePointNode::OnePointNode(void)
{
	centerPoint_ = ccp(0,0);
}


OnePointNode::~OnePointNode(void)
{
}

void OnePointNode::setPoint(CCPoint start_point){
	centerPoint_ = start_point;
}

void OnePointNode::draw() {
	glLineWidth(10.0f);					//�ʻ���ϸ
	ccDrawColor4F(1,0,0,1);				//�ʻ���ɫ
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	ccPointSize(20);
	ccDrawPoint(centerPoint_);
}