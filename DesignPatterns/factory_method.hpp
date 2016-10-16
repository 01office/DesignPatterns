//
//  factory_method.hpp
//  DesignPatterns
//
//  Created by heyong on 2016/10/16.
//  Copyright © 2016年 heyong. All rights reserved.
//

#ifndef factory_method_hpp
#define factory_method_hpp

#include <stdio.h>

class AbsProduct
{
public:
    AbsProduct();
    virtual ~AbsProduct();
    virtual void use() = 0;
};

class LogProduct : public AbsProduct
{
public:
    LogProduct();
    ~LogProduct();
    virtual void use();
};

class FileProduct : public AbsProduct
{
public:
    FileProduct();
    ~FileProduct();
    virtual void use();
};

class AbsFactory
{
public:
    AbsFactory();
    ~AbsFactory();
    virtual AbsProduct *create() = 0;
};

class LogFactory : public AbsFactory
{
public:
    LogFactory();
    ~LogFactory();
    virtual AbsProduct *create();
};

class FileFactory : public AbsFactory
{
public:
    FileFactory();
    ~FileFactory();
    virtual AbsProduct *create();
};

#endif /* factory_method_hpp */
