//
//  factory.hpp
//  DesignPatterns
//
//  Created by heyong on 16/8/14.
//  Copyright © 2016年 heyong. All rights reserved.
//

#ifndef factory_hpp
#define factory_hpp

#include <stdio.h>

class Product;

class Factory
{
public:
    virtual ~Factory() = 0;
    virtual Product *CreateProduct() = 0;
    
protected:
    Factory();
    
private:
};

class ConcreteFactory: public Factory
{
public:
    ConcreteFactory();
    ~ConcreteFactory();
    Product *CreateProduct();
    
protected:
    
private:
};

#endif /* factory_hpp */
