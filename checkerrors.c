#include"initAArt.h"
#include"checkerrors.h"

int checkerrors(int x, int y, int linetype){

    	if( linetype < 0 || linetype > 3 || x < 0 || x > xsize || y < 0 || y > ysize  ){
    		return -1;
	}
    	else{
		return 0;
	}
}