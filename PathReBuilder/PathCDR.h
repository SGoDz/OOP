#ifndef __PATHCDR__
#define __PATHCDR__

#include "IReBuildAction.h"
#include <string>
#include <iostream>

class PathCDR : public IPath
{
    public:
        PathCDR( const std::string path );
        ~PathCDR( );
        void letsDo( IReBuildAction * const i );

    private:
        const std::string path;
};

#endif //__PATHCDR__
