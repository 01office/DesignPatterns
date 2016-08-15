//
//  abstract_factory.hpp
//  DesignPatterns
//
//  Created by heyong on 16/8/16.
//  Copyright © 2016年 heyong. All rights reserved.
//

#ifndef abstract_factory_hpp
#define abstract_factory_hpp

#include <stdio.h>

class AbstractProductA;
class AbstractProductB;

class AbstractFactory
{
public:
    virtual ~AbstractFactory();
    virtual AbstractProductA *CreateProductA() = 0;
    virtual AbstractProductB *CreateProductB() = 0;
    
protected:
    AbstractFactory();
    
private:
};

class ConcreteFactory1: public AbstractFactory
{
public:
    ConcreteFactory1();
    ~ConcreteFactory1();
    AbstractProductA *CreateProductA();
    AbstractProductB *CreateProductB();
    
protected:
    
private:
};

class ConcreteFactory2: public AbstractFactory
{
public:
    ConcreteFactory2();
    ~ConcreteFactory2();
    AbstractProductA *CreateProductA();
    AbstractProductB *CreateProductB();
    
protected:
    
private:
};

#endif /* abstract_factory_hpp */
