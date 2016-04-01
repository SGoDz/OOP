#ifndef __FILEPATHSTATUS__
#define __FILEPATHSTATUS__

#include <unistd.h> 
#include <sys/stat.h> 
#include <stdint.h>
#include <string>

class FilePathStatus {

    public:
        static bool isValid( const std::string path ) ;                
        static int32_t makeDir( std::string path , mode_t mode ) ;

    private:
        FilePathStatus() {}

};
#endif //__FILEPATHSTATUS__
