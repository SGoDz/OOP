#ifndef __ELEMENTCONCRETE1__
#define __ELEMENTCONCRETE1__

#include <iostream>

#include "visitor.h"

class element_concrete_1 : public element
{
    public:
        element_concrete_1() {}
        virtual ~element_concrete_1() {}
        virtual void accept( visitor& v )
        {
            v.visit(*this);
        }
};
#endif //__ELEMENTCONCRETE1__
