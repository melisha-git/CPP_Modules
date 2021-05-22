#ifndef DEFAULT_HEADER_HPP
#define DEFAULT_HEADER_HPP
#include <iostream>
#include <string>
#include "Base.class.hpp"
#include "A.class.hpp"
#include "B.class.hpp"
#include "C.class.hpp"

Base *generate(void);
void identify_from_pointer (Base * p);
void identify_from_reference (Base & p);

#endif