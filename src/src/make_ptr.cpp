#include <make_ptr.h>
#include "setter_getter.h"

std::unique_ptr<ISetterGetter> makePtr()
{
    return std::make_unique<SetterGetter>();
}
