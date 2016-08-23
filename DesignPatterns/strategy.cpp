//
//  strategy.cpp
//  DesignPatterns
//
//  Created by heyong on 16/8/23.
//  Copyright © 2016年 heyong. All rights reserved.
//

#include "strategy.hpp"

#include <iostream>
using namespace std;

Strategy::Strategy(){}
Strategy::~Strategy(){}

ConcreteStrategyA::ConcreteStrategyA(){}
ConcreteStrategyA::~ConcreteStrategyA(){}

void ConcreteStrategyA::AlgorithmInterface()
{
    cout << "test ConcreteStrategyA..." << endl;
}