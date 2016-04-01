#ifndef __BUILDERACTION__
#define __BUILDERACTION__

#include "IReBuildAction.h"
#include "PathCDR.h"
#include "FolderCDR.h"

class BuilderAction : public IReBuildAction 
{
    public:
        BuilderAction();
        ~BuilderAction();
        void visit ( PathCDR * const p );
        void visit ( FolderCDR * const f );
};

#endif // __BUILDERACTION__
