//
//  adapter.hpp
//  DesignPatterns
//
//  Created by heyong on 2016/10/22.
//  Copyright © 2016年 heyong. All rights reserved.
//

#ifndef adapter_hpp
#define adapter_hpp

#include <stdio.h>

class Adaptee
{
public:
    Adaptee();
    ~Adaptee();
    void specialRequest();
};

class Target
{
public:
    Target();
    ~Target();
    virtual void request() = 0;
};

class Adapter : public Target
{
public:
    Adapter(Adaptee *adaptee);
    ~Adapter();
    virtual void request();
    
private:
    Adaptee *m_pAdaptee;
};

#endif /* adapter_hpp */
