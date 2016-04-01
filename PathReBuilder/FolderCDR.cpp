#include "FolderCDR.h"

using namespace std;

FolderCDR::FolderCDR( const string folder ) { };

FolderCDR::~FolderCDR( ) { };

void FolderCDR::letsDo( IReBuildAction * const i ) 
{
    i->visit(this);
};
