//
//  singleton.hpp
//  DesignPatterns
//
//  Created by heyong on 16/8/17.
//  Copyright © 2016年 heyong. All rights reserved.
//

#ifndef singleton_hpp
#define singleton_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Singleton
{
public:
    static Singleton *getInstance();
    
protected:
    Singleton();
    ~Singleton();
    
private:
    static Singleton *m_data;
    Singleton(const Singleton &another);
    Singleton &operator = (const Singleton &rhs);
};

#endif /* singleton_hpp */
