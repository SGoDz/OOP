#ifndef __IREBUILDACTION__
#define __IREBUILDACTION__

#include "IPath.h"

class PathCDR;
class FolderCDR;

class IReBuildAction
{
    public:
        IReBuildAction() {}
        virtual ~IReBuildAction() {}
        virtual void visit ( PathCDR * const p ) = 0;
        virtual void visit ( FolderCDR * const f ) = 0;
};

#endif // __IREBUILDACION__
