#include <iostream>
#include "Visitor.h"

using namespace std;

int main()
{
    cout << " Visitor Design Pattern " << endl;

    element_concrete_1 el1;
    element_concrete_2 el2;
    visitor_concrete v;

    v.visit(el1);
    v.visit(el2);
};
