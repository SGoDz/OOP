#include "FilePathStatus.h"
#include "zwlog.h"

#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include <string.h> 
#include <algorithm>  

using namespace std;

bool FilePathStatus::isValid( const string path ) { 
    struct stat st = {0};
    if( stat(path.c_str(),&st) == -1 ) {
        return false;
    }
    return true;
}

int32_t FilePathStatus::makeDir ( string path, mode_t mode ) {

    struct stat st;
    if( path[0] == '/' ) path = path.substr(1,path.length()); 

    for( string::iterator it = path.begin() ; it != path.end();  )
    {
        string::iterator itPath = find( it, path.end(), '/');
        string auxPath = "/"+string( path.begin(), itPath ); 

        if( stat( auxPath.c_str(), &st ) != 0 )
        {
            if ( mkdir( auxPath.c_str(), mode ) !=0 && errno != EEXIST ) 
            {
                ZWLFATAL("Can not create folder : %s", strerror(errno));
                return -1;
            }
        }

        else
        {
            if( !S_ISDIR ( st.st_mode ) )
            {
                errno = ENOTDIR;
                ZWLFATAL("Not a valid dir : %s", strerror(errno));
                return -1; 
            }

            else
            {
                //ZWLTRACE("Path already exist ");
            }
        }

        it = itPath;
        if ( itPath != path.end() ) ++it; 

    }

    return 0;

}
