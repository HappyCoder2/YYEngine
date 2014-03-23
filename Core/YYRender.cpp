//
//  YYRender.cpp
//  YYEngineDemo
//
//  Created by 郑一 on 14-3-23.
//  Copyright (c) 2014年 郑一. All rights reserved.
//

#include "YYRender.h"
#include <GlUT/glut.h>

void YYRender::display()
{
    std::list<YYSprite*>::iterator iter;
    YYSprite* tmpSprite;
    for (iter = _spriteList.begin(); iter != _spriteList.end(); iter++) {
        tmpSprite = *iter;
        YYSize size = tmpSprite->getSize();
        GLfloat vectexts[] = {0.0, 0.0,
            size.w, 0.0,
            size.w, size.h,
            0.0, size.h};
//        glBegin(GL_POLYGON);
//        glVertex2fv(&vectexts[0]);
//        glVertex2fv(&vectexts[2]);
//        glVertex2fv(&vectexts[4]);
//        glVertex2fv(&vectexts[6]);
//        glEnd();
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