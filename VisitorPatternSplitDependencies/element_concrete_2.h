#ifndef __ELEMENTCONCRETE2__
#define __ELEMENTCONCRETE2__

#include <iostream>

#include "visitor.h"

class element_concrete_2 : public element
{
    public:
        element_concrete_2() {}
        virtual ~element_concrete_2(){}
        virtual void accept( visitor& v )
        {
            v.visit(*this);
        }
};
#endif //__ELEMENTCONCRETE2__
