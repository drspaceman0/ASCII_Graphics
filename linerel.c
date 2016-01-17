#include "linerel.h"
#include "lineabs.h"
#include "initAArt.h"


int linerel( int nextx, int nexty, int linetype){

  	lineabs( xrel, yrel, nextx, nexty, linetype);
  	return 0;
}
