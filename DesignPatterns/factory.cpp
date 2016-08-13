//
//  factory.cpp
//  DesignPatterns
//
//  Created by heyong on 16/8/14.
//  Copyright © 2016年 heyong. All rights reserved.
//

#include "factory.hpp"

#include <iostream>

using namespace std;

Factory::Factory()
{
    
}

Factory::~Factory()
{
    
}

ConcreteFactory::ConcreteFactory()
{
    cout << "CreateFactory..." << endl;
}

ConcreteFactory::~ConcreteFactory()
{
    
}

Product *ConcreteFactory::CreateProduct()
{
    return ConcreteProduct();
}
