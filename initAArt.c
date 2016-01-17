#include <stdio.h>
#include <stdlib.h>
#include "initAArt.h"
//initialize canvas size

int rows, cols;
int **canvas;
int xrel = 0;
int yrel = 0;
int xsize = 0;
int ysize = 0;

int initAArt(int maxx, int maxy ){
	int i;
  	rows = maxx;
  	cols = maxy;
  	canvas[maxx][maxy];
  	canvas  = malloc(rows * sizeof(int *));
  	for (i = 0; i < rows; i++){
    		canvas[i] = malloc(cols * sizeof(int));
  	}
	xsize = maxx;
	ysize = maxy;
	
  	return 0;
}
