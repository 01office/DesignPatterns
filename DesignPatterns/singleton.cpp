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

Singleton *Singleton::m_data = NULL;

Singleton::Singleton()
{
    cout << "Singleton..." << endl;
}

Singleton::~Singleton()
{
    delete m_data;
}

Singleton *Singleton::getInstance()
{
    if (m_data == NULL) {
        m_data = new Singleton();
    }
    
    return m_data;
}

/*
Singleton *Singleton::getInstance()
{
    if (m_data == NULL) {
        lock();
        if (m_data == NULL) {
            m_data = new Singleton();
        }
        unlock();
    }
    return m_data;
}
 */

/*
class CCSingleton
{
private:
    static CCSingleton *m_instance;
    CCSingleton(){};
    
    class CCGarbo
    {
    public:
        ~CCGarbo()
        {
            if (CCSingleton::m_instance) {
                delete CCSingleton::m_instance;
            }
        }
    };
    static CCGarbo garbo;
    
public:
    static CCSingleton *getInstance()
    {
        if (m_instance == NULL) {
            m_instance = new CCSingleton();
        }
        return m_instance;
    }
};
 */
