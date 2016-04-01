#ifndef __VISITOR__
#define __VISITOR__

#include <iostream>

class element_concrete_1;
class element_concrete_2;

class visitor
{
    public:
        virtual void visit( element_concrete_1& el ) = 0;
        virtual void visit( element_concrete_2& el ) = 0;
};

class visitor_concrete : public visitor 
{
    public:
        virtual void visit( element_concrete_1& el )
        {
            std::cout << "element_concrete_1 visitado " << std::endl;
        };

        virtual void visit( element_concrete_2& el )
        {
            std::cout << "element_concrete_2 visitado " << std::endl;
        };
};

class element
{
    public:
        virtual void accept( visitor& v ) = 0;
};

class element_concrete_1 : public element
{
    public:
        virtual void accept( visitor& v )
        {
            v.visit(*this);
        }
};

class element_concrete_2 : public element
{
    public:
        virtual void accept( visitor& v )
        {
            v.visit(*this);
        }
};

#endif //__VISITOR__
