//
//  YYSprite.h
//  YYEngineDemo
//
//  Created by 郑一 on 14-3-23.
//  Copyright (c) 2014年 郑一. All rights reserved.
//

#ifndef YYEngineDemo_YYSprite_h
#define YYEngineDemo_YYSprite_h

#include "YYEntities.h"

class YYSprite
{
	YYPoint _pos, _scale, _roated, _anchor;
	YYSize _size;
	bool _invaildData = false;
public:
	YYSprite();
	void setPosition(YYPoint pos);
	void setAnchor(YYPoint anchor);
	void setRoated(YYPoint roated);
	void setScale(YYPoint scale);
	void setSize(YYSize size);
	
	YYPoint getPosition();
	YYPoint getAnchor();
	YYPoint getRoated();
	YYPoint getScale();
	YYSize getSize();
    };

#endif
