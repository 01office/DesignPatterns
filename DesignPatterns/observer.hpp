//
//  observer.hpp
//  DesignPatterns
//
//  Created by heyong on 16/9/27.
//  Copyright © 2016年 heyong. All rights reserved.
//

#ifndef observer_hpp
#define observer_hpp

#include <string>
#include <list>

class Subject;

class Observer
{
public:
    Observer();
    ~Observer();
    virtual void Update(Subject *) = 0;
};

class ConcreteObserverA : public Observer
{
public:
    ConcreteObserverA();
    ~ConcreteObserverA();
    void Update(Subject *);

private:
    std::string m_state;
};

class ConcreteObserverB : public Observer
{
public:
    ConcreteObserverB();
    ~ConcreteObserverB();
    void Update(Subject *);
    
private:
    std::string m_state;
};




#endif /* observer_hpp */
