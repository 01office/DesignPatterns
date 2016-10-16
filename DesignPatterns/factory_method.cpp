//
//  factory_method.cpp
//  DesignPatterns
//
//  Created by heyong on 2016/10/16.
//  Copyright © 2016年 heyong. All rights reserved.
//

#include "factory_method.hpp"

#include <iostream>

AbsProduct::AbsProduct(){}
AbsProduct::~AbsProduct(){}

LogProduct::LogProduct(){}
LogProduct::~LogProduct(){}
void LogProduct::use()
{
    std::cout << "I'm log..." << std::endl;
}

FileProduct::FileProduct(){}
FileProduct::~FileProduct(){}
void FileProduct::use()
{
    std::cout << "I'm file..." << std::endl;
}


AbsFactory::AbsFactory(){}
AbsFactory::~AbsFactory(){}

LogFactory::LogFactory(){}
LogFactory::~LogFactory(){}
AbsProduct *LogFactory::create()
{
    return new LogProduct();
}

FileFactory::FileFactory(){}
FileFactory::~FileFactory(){}
AbsProduct *FileFactory::create()
{
    return new FileProduct();
}
