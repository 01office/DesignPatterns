//
//  abstract_factory.cpp
//  DesignPatterns
//
//  Created by heyong on 16/8/16.
//  Copyright © 2016年 heyong. All rights reserved.
//

#include "abstract_factory.hpp"
#include "product_a.hpp"

#include <iostream>

using namespace std;

AbstractFactory::AbstractFactory()
{
    
}

AbstractFactory::~AbstractFactory()
{
    
}

ConcreteFactory1::ConcreteFactory1()
{
    
}

ConcreteFactory1::~ConcreteFactory1()
{
    
}

AbstractProductA *ConcreteFactory1::CreateProductA()
{
    return new ProductA1();
}

AbstractProductB *ConcreteFactory1::CreateProductB()
{
    return new ProductB1();
}

ConcreteFactory2::ConcreteFactory2()
{
    
}

ConcreteFactory2::~ConcreteFactory2()
{
    
}

AbstractProductA *ConcreteFactory2::CreateProductA()
{
    return new ProductA2();
}

AbstractProductB *ConcreteFactory2::CreateProductB()
{
    return new ProductB2();
}
