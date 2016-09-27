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
    m_state = pSubject->GetState();
    std::cout << "The COA is " << m_state << std::endl;
}

ConcreteObserverB::ConcreteObserverB(){}

ConcreteObserverB::~ConcreteObserverB(){}

void ConcreteObserverB::Update(Subject *pSubject)
{
    m_state = pSubject->GetState();
    std::cout << "The COB is " << m_state << std::endl;
}

Subject::Subject(){}
Subject::~Subject(){}

void Subject::Notify()
{
    std::list<Observer *>::iterator it = m_lst.begin();
    for (; it != m_lst.end(); ++it) {
        (*it)->Update(this);
    }
}

void Subject::Attach(Observer *pObserver)
{
    m_lst.push_back(pObserver);
    std::cout << "Attach an observer." << std::endl;
}

void Subject::Detach(Observer *pObserver)
{
    std::list<Observer *>::iterator it = std::find(m_lst.begin(), m_lst.end(), pObserver);
    if (it != m_lst.end()) {
        m_lst.erase(it);
    }
    std::cout << "Detach an observer." << std::endl;
}

std::string Subject::GetState()
{
    return m_state;
}

void Subject::SetState(std::string state)
{
    m_state = state;
}

ConcreteSubjectA::ConcreteSubjectA(){}
ConcreteSubjectA::~ConcreteSubjectA(){}

ConcreteSubjectB::ConcreteSubjectB(){}
ConcreteSubjectB::~ConcreteSubjectB(){}
