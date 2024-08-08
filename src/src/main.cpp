#include <iostream>
#include <string>
#include <memory>
#include <make_ptr.h>


int main()
{
    auto ptr = makePtr();
    std::string name = "Anoj";
    int age = 27;
    ptr->setName(name);
    ptr->setAge(age);
    auto name_ = ptr->getName();
    auto age_ = ptr->getAge();
    std::cout << "Name " << name_ << " Age: " << age_ <<  '\n';
    return 0;
}
