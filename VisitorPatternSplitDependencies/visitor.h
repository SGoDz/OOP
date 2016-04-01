#ifndef __VISITOR__
#define __VISITOR__

#include <iostream>

#include "element.h"

class element_concrete_1;
class element_concrete_2;

class visitor
{
    public:
        visitor() {}
        virtual ~visitor() {}
        virtual void visit( element_concrete_1& el ) = 0;
        virtual void visit( element_concrete_2& el ) = 0;
};

#endif //__VISITOR__
