//
//  simple_factory.cpp
//  DesignPatterns
//
//  Created by heyong on 2016/10/16.
//  Copyright © 2016年 heyong. All rights reserved.
//

#include "simple_factory.hpp"

AbstractProduct::AbstractProduct(){}
AbstractProduct::~AbstractProduct(){}

ProductA::ProductA(){}
ProductA::~ProductA(){}
void ProductA::use()
{
    std::cout << "This is product A." << std::endl;
}

ProductB::ProductB(){}
ProductB::~ProductB(){}
void ProductB::use()
{
    std::cout << "This is product B." << std::endl;
}

SimpleFactory::SimpleFactory(){}
SimpleFactory::~SimpleFactory(){}
AbstractProduct *SimpleFactory::createProduct(std::string str)
{
    AbstractProduct *product = NULL;
    if (str == "A") {
        product = new ProductA();
    }
    if (str == "B") {
        product = new ProductB();
    }
    return product;
}
