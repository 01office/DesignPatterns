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

ConcreteStrategyB::ConcreteStrategyB(){}
ConcreteStrategyB::~ConcreteStrategyB(){}

void ConcreteStrategyB::AlgorithmInterface()
{
    cout << "test ConcreteStrategyB..." << endl;
}

Contxt::Contxt(Strategy *sg)
{
    m_sg = sg;
}

Contxt::~Contxt()
{
    if (m_sg != NULL) {
        delete m_sg;
    }
}

void Contxt::doAction()
{
    m_sg->AlgorithmInterface();
}
