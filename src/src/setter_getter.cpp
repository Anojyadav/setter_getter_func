#include "setter_getter.h"

#include<string>

void SetterGetter::setName(std::string &name)
{
    name_ = name;
}

void SetterGetter::setAge(int &age)
{
    age_ = age;
}

std::string SetterGetter::getName() const 
{
    return name_;
}

int SetterGetter::getAge() const
{
    return age_;
}