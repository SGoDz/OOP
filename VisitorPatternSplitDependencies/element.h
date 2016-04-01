#ifndef __ELEMENT__
#define __ELEMENT__

#include <iostream>

class visitor;

class element
{
    public:
        element() {}
        virtual ~element() {}
        
        virtual void accept( visitor& v ) = 0;
};
#endif //__ELEMENT__
