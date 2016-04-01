#ifndef __IPATH__
#define __IPATH__

#include <iostream>
#include <string>

class IReBuildAction;

class IPath
{
    public:
        IPath( ) {}
        virtual ~IPath( ) {}
        virtual void letsDo( IReBuildAction * const i ) = 0;
};

#endif //__IPATH__
