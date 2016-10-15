//
//  simple_factory.hpp
//  DesignPatterns
//
//  Created by heyong on 2016/10/16.
//  Copyright © 2016年 heyong. All rights reserved.
//

#ifndef simple_factory_hpp
#define simple_factory_hpp

#include <stdio.h>

#include <iostream>
#include <string>

class AbstractProduct
{
public:
    AbstractProduct();
    virtual ~AbstractProduct();
    virtual void use() = 0;
};

class ProductA : public AbstractProduct
{
public:
    ProductA();
    virtual ~ProductA();
    virtual void use();
};

class ProductB : public AbstractProduct
{
public:
    ProductB();
    virtual ~ProductB();
    virtual void use();
};


class SimpleFactory
{
public:
    SimpleFactory();
    ~SimpleFactory();
    AbstractProduct *createProduct(std::string str);
};

#endif /* simple_factory_hpp */
