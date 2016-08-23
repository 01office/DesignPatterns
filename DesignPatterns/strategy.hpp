//
//  strategy.hpp
//  DesignPatterns
//
//  Created by heyong on 16/8/23.
//  Copyright © 2016年 heyong. All rights reserved.
//

#ifndef strategy_hpp
#define strategy_hpp

class Strategy
{
public:
    Strategy();
    ~Strategy();
    virtual void AlgorithmInterface();
};

class ConcreteStrategyA: public Strategy
{
public:
    ConcreteStrategyA();
    ~ConcreteStrategyA();
    void AlgorithmInterface();
};

class ConcreteStrategyB: public Strategy
{
public:
    ConcreteStrategyB();
    ~ConcreteStrategyB();
    void AlgorithmInterface();
};

#endif /* strategy_hpp */
