#ifndef I_SETTER_GETTER_H
#define I_SETTER_GETTER_H

#include <string>
#include <memory>

class ISetterGetter {

    public:
        ISetterGetter() = default;
        virtual ~ISetterGetter() = default;
        virtual void setName(std::string &name) = 0;
        virtual void setAge(int &age)  = 0;
        virtual std::string getName() const = 0;
        virtual int getAge() const = 0;

};

#endif