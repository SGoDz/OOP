#include "PathReBuilder.h"
#include "FilePathStatus.h"
#include "zwlog.h"

using namespace std;

PathReBuilder::PathReBuilder ( ILabels * const  iLabels , IFile * const file ) : iLabels(iLabels),file(file)
{
    path = iLabels->getCurrentPath();
}

bool PathReBuilder::checkStatus() const
{
    return FilePathStatus::isValid(path);
}

int32_t PathReBuilder::undo()
{
    if( checkStatus() == false && file->exist() == true ) 
    {
        FilePathStatus::makeDir(path,0755);
        ZWLWARN("FOLDER WAS DELETED. REBUILDING DIRECTORIES ");
        return 0;
    }
    
    else if ( checkStatus() == true && file->exist() == false )
    {
        ZWLTRACE("OPEN FILE ");
        return file->open();
    }

    else if ( checkStatus() == false && file->exist() == false )
    {
        FilePathStatus::makeDir(path,0755);
        ZWLWARN("FOLDER WAS DELETED. REBUILDING DIRECTORIES ");
        ZWLWARN("FILE DONT EXIST ");
        return file->open();
    }

    else
    {
        /* ZWLINFO("FOLDER REMAIN UNTOUCHED "); */
        return 0;
    }
}
