
#ifndef __PATHREBUILDER__
#define __PATHREBUILDER__

#include "IFile.h"
#include "ILabels.h"

#include <stdint.h>
#include <string>

class PathReBuilder {
    public:
        PathReBuilder( ILabels * const iLabels , IFile * const iFile);
        int32_t undo();

    private:
        bool checkStatus() const ;

    private:
        ILabels * const iLabels;
        IFile * const file;
        std::string path;  

};

#endif //__PATHREBUILDER__
