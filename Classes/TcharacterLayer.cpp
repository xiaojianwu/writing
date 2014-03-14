#include "TcharacterLayer.h"

TcharacterLayer::TcharacterLayer():m_sprite(NULL){

}

TcharacterLayer::~TcharacterLayer(){
	CC_SAFE_RELEASE(m_sprite);
}

bool TcharacterLayer::init(){
	if (CCLayer::init())
	{
		CCLog("TcharacterLayer");
		

		
		

		CCSprite* dog = CCSprite::create("dog.png");
		dog->setPosition(CCPointMake(300,300));
		this->addChild(dog,1000,1000);
		return true;
	}
	return false;
}

void TcharacterLayer::onEnter(){

	string ba("��");
	this->m_TDrawnode = new TcharacterDrawnode(ba,m_sprite->getContentSize());
	this->addChild(m_TDrawnode,2000);
	//������Anchorpoint�ˣ�ֱ��������任
	m_TDrawnode->setPosition(m_sprite->getPosition()-ccp(m_sprite->getContentSize().width/2,m_sprite->getContentSize().height/2));
	

}

void TcharacterLayer::onExit(){

}