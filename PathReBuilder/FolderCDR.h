#ifndef __FOLDERCDR__
#define __FOLDERCDR__

#include "IReBuildAction.h"
#include <string>
#include <iostream>

class FolderCDR : public IPath
{
    public:
        FolderCDR( const std::string folder );
        ~FolderCDR( );
        void letsDo( IReBuildAction * const i );

    private:
        const std::string folder;;
};

#endif //__FOLDERCDR__
