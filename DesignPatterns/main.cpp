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

#include "strategy.hpp"

#include "observer.hpp"

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
/*
    Factory *fac = new ConcreteFactory();
    fac->CreateProduct();
    
    AbstractFactory *afac1 = new ConcreteFactory1();
    afac1->CreateProductA();
    afac1->CreateProductB();
    
    AbstractFactory *afac2 = new ConcreteFactory2();
    afac2->CreateProductA();
    afac2->CreateProductB();
    
    Singleton *sgn = Singleton::getInstance();
    
    // test strategy pattern
    Strategy *psa = new ConcreteStrategyA();
    Contxt *pca = new Contxt(psa);
    pca->doAction();
    
    Strategy *psb = new ConcreteStrategyB();
    Contxt *pcb = new Contxt(psb);
    pcb->doAction();
*/
    
    Observer *O1 = new ConcreteObserverA();
    Observer *O2 = new ConcreteObserverB();
    
    Subject *Ps1 = new ConcreteSubjectA();
    Ps1->Attach(O1);
    Ps1->Attach(O2);
    
    Ps1->SetState("old");
    
    Ps1->Notify();
    
    Ps1->Detach(O1);
    
    Ps1->SetState("new");
    
    Ps1->Notify();
    
    std::cout << "Hello, World!\n";
    return 0;
}
