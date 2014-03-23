//
//  YYRender.cpp
//  YYEngineDemo
//
//  Created by 郑一 on 14-3-23.
//  Copyright (c) 2014年 郑一. All rights reserved.
//

#include "YYRender.h"
#include <OpenGl/gl.h>

void YYRender::init()
{
    std::list<YYSprite*>::iterator iter;
    YYSprite* tmpSprite;
    for (iter = _spriteList.begin(); iter != _spriteList.end(); iter++) {
        tmpSprite = *iter;        
    }
}

void YYRender::addDisplayObject(YYSprite *sprite)
{
    if (sprite != NULL) {
        _spriteList.push_back(sprite);
    }
}

void YYRender::removeDisplayObject(YYSprite *sprite)
{
    if (sprite != NULL) {
        _spriteList.remove(sprite);
    }
}