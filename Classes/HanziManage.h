#pragma once

#include "cocos2d.h"
#include <string>

USING_NS_CC;
using namespace std;

class CHanziManage
{
public:
    string character;
    CCLabelTTF* textbox;
    CCPoint pos;
    string filename;
    float proficiency;

public:
    CHanziManage(void);

    ~CHanziManage(void);
};
