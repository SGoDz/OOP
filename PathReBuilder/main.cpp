#include "BuilderAction.h"
#include "PathCDR.h"
#include "FolderCDR.h"

#include <iostream>

using namespace std;

int main()
{
    PathCDR path("/home/sebastian/Desktop/ZWEICOM/TEST/PATH");
    FolderCDR folder("ZWEICOM");
    BuilderAction * const builderAction = new BuilderAction();
    path.letsDo(builderAction);
    folder.letsDo(builderAction);
    delete builderAction;
};
