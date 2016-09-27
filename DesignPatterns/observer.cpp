//
//  observer.cpp
//  DesignPatterns
//
//  Created by heyong on 16/9/27.
//  Copyright © 2016年 heyong. All rights reserved.
//

#include <iostream>
#include "observer.hpp"

Observer::Observer(){}
Observer::~Observer(){}

ConcreteObserverA::ConcreteObserverA(){}

ConcreteObserverA::~ConcreteObserverA(){}

void ConcreteObserverA::Update(Subject *pSubject)
{
    m_state;
}

ConcreteObserverB::ConcreteObserverB(){}

ConcreteObserverB::~ConcreteObserverB(){}

void ConcreteObserverB::Update(Subject *pSubject)
{
    m_state;
}
