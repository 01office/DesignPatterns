//
//  product.hpp
//  DesignPatterns
//
//  Created by heyong on 16/8/14.
//  Copyright © 2016年 heyong. All rights reserved.
//

#ifndef product_hpp
#define product_hpp

#include <stdio.h>

class Product
{
public:
    virtual ~Product() = 0;
    
protected:
    Product();
    
private:
};

class ConcreteProduct: public Product
{
public:
    ConcreteProduct();
    ~ConcreteProduct();
    
protected:
    
private:
};

#endif /* product_hpp */
