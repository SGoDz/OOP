#include "Context.h"

int main( int argc, char *argv[] ) {
	
	ConcreteStrategyA cSA;
	Context contextA(&cSA);
	contextA.execute();
	return 0;
}
