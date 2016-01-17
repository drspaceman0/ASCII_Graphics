#include "lineabs.h"
#include "initAArt.h"
#include "point.h"
#include"checkerrors.h"
#include<stdlib.h>
#include<stdio.h>

int circle(int centx, int centy, int radius, int linetype){
	int x = radius;
	int y = 0;
	int radiusError = 1-x;

	while(x >= y){
		if(checkerrors(x + centx,  y + centy, linetype) || checkerrors(y + centx,  x + centy, linetype) || checkerrors(-x + centx,  y + centy, linetype) || checkerrors(-y + centx,  x + centy, linetype) || checkerrors(-x + centx, -y + centy, linetype) || checkerrors(-y + centx, -x + centy, linetype) || checkerrors(x + centx, -y + centy, linetype) || checkerrors(y + centx, -x + centy, linetype)){
			printf("Error in printing circle.\n");
			return -1;
		}
		else{
			point( x + centx,  y + centy, linetype);
   			point( y + centx,  x + centy, linetype);
    			point(-x + centx,  y + centy, linetype);
    			point(-y + centx,  x + centy, linetype);
    			point(-x + centx, -y + centy, linetype);
    			point(-y + centx, -x + centy, linetype);
    			point( x + centx, -y + centy, linetype);
    			point( y + centx, -x + centy, linetype);
		}
		y++;
		if(radiusError < 0){
			radiusError = radiusError + 2 * y + 1;
		}
		else{
			x--;
			radiusError = radiusError + 2 * (y - x) + 1;
		}
	}
	return 0;
}

