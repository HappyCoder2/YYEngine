//
//  YYRender.h
//  YYEngineDemo
//
//  Created by 郑一 on 14-3-23.
//  Copyright (c) 2014年 郑一. All rights reserved.
//

#ifndef YYEngineDemo_YYRender_h
#define YYEngineDemo_YYRender_h

class YYRender
{
public:
    static YYRender* shareRender();
    void init(void);
    void display();
};

#endif
