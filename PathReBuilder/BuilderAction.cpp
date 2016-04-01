#include "BuilderAction.h"

using namespace std;

BuilderAction::BuilderAction() {};
BuilderAction::~BuilderAction() {};

void BuilderAction::visit( PathCDR * const p ) 
{
    cout << "[BuilderAction] make PathCDR" << endl;
};

void BuilderAction::visit( FolderCDR * const f ) 
{
    cout << "[BuilderAction] make FolderCDR" << endl;
};
