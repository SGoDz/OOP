#include "PathCDR.h"

using namespace std;

PathCDR::PathCDR( const string path ) : path(path) { };
PathCDR::~PathCDR() { };

void PathCDR::letsDo( IReBuildAction * const i )
{
    i->visit(this);
};
