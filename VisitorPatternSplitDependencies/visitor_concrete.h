#ifndef __VISITORCONCRETE_
#define __VISITORCONCRETE__

#include <iostream>

#include "visitor.h"
#include "element_concrete_1.h"
#include "element_concrete_2.h"

class visitor_concrete : public visitor 
{
    public:
        visitor_concrete() {} 
        void visit( element_concrete_1& el )
        {
            std::cout << "element_concrete_1 visitado " << std::endl;
        };

        void visit( element_concrete_2& el )
        {
            std::cout << "element_concrete_2 visitado " << std::endl;
        };
};
#endif //__VISITORCONCRETE__
