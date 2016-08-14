//
//  main.cpp
//  DesignPatterns
//
//  Created by heyong on 16/8/14.
//  Copyright © 2016年 heyong. All rights reserved.
//

#include "factory.hpp"
#include "product.hpp"

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    Factory *fac = new ConcreteFactory();
    
    Product *p = fac->CreateProduct();
    
    std::cout << "Hello, World!\n";
    return 0;
}
