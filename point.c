#include "point.h"
#include "drawAArt.h"
#include "initAArt.h"
#include<stdio.h>

int point(int x, int y, int linetype){
	
	if(checkerrors(x,y,linetype)){
		printf("Point is out of bounds.\n");
		return -1;
	}
	
  	canvas[y][x] = linetype;

  	xrel = x;
  	yrel = y;

  	return 0;
}
