//
//  product_a.hpp
//  DesignPatterns
//
//  Created by heyong on 16/8/16.
//  Copyright © 2016年 heyong. All rights reserved.
//

#ifndef product_a_hpp
#define product_a_hpp

#include <stdio.h>

class AbstractProductA
{
public:
    virtual ~AbstractProductA();
    
protected:
    AbstractProductA();
    
private:
};

class AbstractProductB
{
public:
    virtual ~AbstractProductB();
    
protected:
    AbstractProductB();
    
private:
};

class ProductA1: public AbstractProductA
{
public:
    ProductA1();
    ~ProductA1();
    
protected:
    
private:
};

class ProductA2: public AbstractProductA
{
public:
    ProductA2();
    ~ProductA2();
    
protected:
    
private:
};

class ProductB1: public AbstractProductB
{
public:
    ProductB1();
    ~ProductB1();
    
protected:
    
private:
};

class ProductB2: public AbstractProductB
{
public:
    ProductB2();
    ~ProductB2();
    
protected:
    
private:
};

#endif /* product_a_hpp */
