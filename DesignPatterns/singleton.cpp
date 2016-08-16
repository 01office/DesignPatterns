//
//  singleton.cpp
//  DesignPatterns
//
//  Created by heyong on 16/8/17.
//  Copyright © 2016年 heyong. All rights reserved.
//

#include "singleton.hpp"
#include <iostream>
using namespace std;

Singleton *Singleton::m_data = 0;

Singleton::Singleton()
{
    cout << "Singleton..." << endl;
}

Singleton *Singleton::getInstance()
{
    if (m_data == 0) {
        m_data = new Singleton();
    }
    
    return m_data;
}
