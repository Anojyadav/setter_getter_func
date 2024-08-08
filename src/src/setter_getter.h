#ifndef SETTER_GETTER_H
#define SETTER_GETTER_H

#include<i_setter_getter.h>

#include<string>


class SetterGetter final : public ISetterGetter {

    public:
        void setName(std::string &name) override;
        void setAge(int &age) override;
        std::string getName() const override;
        int getAge() const override;

    private:
        std::string name_;
        int age_;
};

#endif
