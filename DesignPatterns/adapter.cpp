//
//  adapter.cpp
//  DesignPatterns
//
//  Created by heyong on 2016/10/22.
//  Copyright © 2016年 heyong. All rights reserved.
//

#include <iostream>

#include "adapter.hpp"

Adaptee::Adaptee(){}
Adaptee::~Adaptee(){}
void Adaptee::specialRequest()
{
    std::cout << "Adaptee special request" << std::endl;
}


Target::Target(){}
Target::~Target(){}


Adapter::Adapter(Adaptee *adaptee)
{
    m_pAdaptee = adaptee;
}

Adapter::~Adapter(){}

void Adapter::request()
{
    m_pAdaptee->specialRequest();
}
