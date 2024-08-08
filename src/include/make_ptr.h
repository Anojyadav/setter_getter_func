#ifndef MAKE_PTR_H
#define MAKE_PTR_H

#include "i_setter_getter.h"
#include <memory>

std::unique_ptr<ISetterGetter> makePtr();

#endif