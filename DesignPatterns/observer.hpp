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

class Subject
{
public:
    Subject();
    ~Subject();
    virtual void Notify();
    virtual void Attach(Observer *);
    virtual void Detach(Observer *);
    virtual std::string GetState();
    virtual void SetState(std::string);
    
private:
    std::list<Observer *> m_lst;
    std::string m_state;
};

class ConcreteSubjectA : public Subject
{
public:
    ConcreteSubjectA();
    ~ConcreteSubjectA();
};

class ConcreteSubjectB : public Subject
{
public:
    ConcreteSubjectB();
    ~ConcreteSubjectB();
};

#endif /* observer_hpp */
