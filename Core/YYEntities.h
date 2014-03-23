//
//  YYEntities.h
//  YYEngineDemo
//
//  Created by 郑一 on 14-3-23.
//  Copyright (c) 2014年 郑一. All rights reserved.
//

#ifndef YYEngineDemo_YYEntities_h
#define YYEngineDemo_YYEntities_h

#include "YYMarcos.h"

#if (YY_CURRENT_PLATFORM == YY_PLATFORM_WINDOWS)
    #include "GL/gl.h"
#elif (YY_CURRENT_PLATFORM == YY_PLATFORM_MAC)
    #include <OpenGl/OpenGL.h>
#endif


#define YYP2F(x, y) YYPoint(x, y, 0);
#define YYP3F(x, y, z) YYPoint(x, y, z);

struct YYPoint
{
    GLfloat x;
    GLfloat y;
};

struct YYRect
{
	GLfloat x;
	GLfloat y;
	GLfloat w;
	GLfloat h;
};
#endif
