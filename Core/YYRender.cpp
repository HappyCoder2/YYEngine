//
//  YYRender.cpp
//  YYEngineDemo
//
//  Created by 郑一 on 14-3-23.
//  Copyright (c) 2014年 郑一. All rights reserved.
//

#include "YYRender.h"
#include "YYSprite.h"
#include <GlUT/glut.h>

YYRender* YYRender::shareRender()
{
    return NULL;
}

void YYRender::init()
{
    
}

void YYRender::display()
{
    std::list<YYSprite*>::iterator iter;
    YYSprite* tmpSprite;
    
    for (iter = _spriteList.begin(); iter != _spriteList.end(); iter++) {
        tmpSprite = *iter;
        YYSize size = tmpSprite->getSize();
        GLfloat vertices[] = {
            0.0, 0.0,
            size.w, 0.0,
            size.w, size.h,
            0, size.h
        };
        glVertexPointer(2, GL_FLOAT, 0, vertices);
        
        GLubyte indices[] = {0, 1, 2, 3};
        glDrawElements(GL_POLYGON, 4, GL_UNSIGNED_BYTE, indices);
    }
    
    glFlush();
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