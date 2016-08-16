//
//  main.cpp
//  DesignPatterns
//
//  Created by heyong on 16/8/14.
//  Copyright © 2016年 heyong. All rights reserved.
//

#include "factory.hpp"
#include "product.hpp"

#include "abstract_factory.hpp"
#include "product_a.hpp"

#include "singleton.hpp"

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    Factory *fac = new ConcreteFactory();
    fac->CreateProduct();
    
    AbstractFactory *afac1 = new ConcreteFactory1();
    afac1->CreateProductA();
    afac1->CreateProductB();
    
    AbstractFactory *afac2 = new ConcreteFactory2();
    afac2->CreateProductA();
    afac2->CreateProductB();
    
    Singleton *sgn = Singleton::getInstance();
    
    std::cout << "Hello, World!\n";
    return 0;
}
