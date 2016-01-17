#include "lineabs.h"
#include "initAArt.h"
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int lineabs(int x1, int y1, int x2, int y2, int linetype){

	int x,y;
	if(checkerrors(x1,y1,linetype) || checkerrors(x2,y2,linetype)){
		printf("Error printing line.\n");
		return -1;
	}
  	
    	int delta_x = (x2 - x1);
    	int ix = ((delta_x > 0) - (delta_x < 0));
    	delta_x = abs(delta_x) << 1;
 
    	int delta_y = (y2 - y1);
    	int iy = ((delta_y > 0) - (delta_y < 0));
    	delta_y = abs(delta_y) << 1;
 
    	point(x1, y1, linetype);
 
	if (delta_x >= delta_y){
       	int error = (delta_y - (delta_x >> 1));
 
        	while (x1 != x2){
             	if ((error >= 0) && (error || (ix > 0))){
                		error -= delta_x;
                		y1 += iy;
            		}	
            		error += delta_y;
            		x1 += ix;
            		point(x1, y1,linetype);
        	}	
    	}
    	else{
        	int error = (delta_x - (delta_y >> 1));
        	while (y1 != y2){
        		if ((error >= 0) && (error || (iy > 0))){
                		error -= delta_y;
                		x1 += ix;
            		}
            		error += delta_x;
            		y1 += iy;
            		point(x1, y1,linetype);
        	}
    	}
	return 0;
}
