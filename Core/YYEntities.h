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
    #include <GLUT/GLUT.h>
#endif

#define YYP2F(x, y) YYPoint(x, y, 0);

#define YYP3F(x, y, z) YYPoint(x, y, z);

struct YYPoint
{
    GLfloat x;
    GLfloat y;
	GLfloat z;
};

struct YYSize
{
	GLfloat w;
	GLfloat h;
};

struct YYRect
{
	GLfloat x;
	GLfloat y;
	GLfloat w;
	GLfloat h;
};

inline bool equalYYPoint(struct YYPoint a,struct YYPoint b)
{
	if (a.x == b.x && a.y == b.y)
		return true;
	return false;
}

inline bool equalYYSize(struct YYSize a,struct YYSize b)
{
	if (a.w == b.w && a.h == b.h)
		return true;
	return false;
}

inline bool equalYYRect(struct YYRect a,struct YYRect b)
{
	if (a.x == b.x && a.y == b.y && a.w == b.w && a.h == b.h)
		return true;
	return false;
}

#endif
