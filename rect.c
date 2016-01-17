#include "lineabs.h"
#include "initAArt.h"
#include "point.h"
#include "rect.h"
#include"checkerrors.h"
#include<stdlib.h>
#include<stdio.h>

int rect(int llx, int lly, int urx, int ury, int linetype){

	if(checkerrors(llx,lly,linetype) || checkerrors(urx,ury,linetype)){
    		printf("Error printing rectangle.\n");
		return -1;
  	}
	lineabs(llx,lly,urx,lly,linetype);
	linerel(urx,ury,linetype);
	linerel(llx,ury,linetype);
	linerel(llx,lly,linetype);
	return 0;

}
