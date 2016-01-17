#include "drawAArt.h"
#include "initAArt.h"
#include <stdio.h>
#include <stdlib.h>

int drawAArt( int ssizex, int ssizey, char *file){

	if(strcmp(file, "stdout") == 0){
		//print to stdout
		int i, j;
		for(i = 0; i < ssizex; i++){
    			for(j = 0; j < ssizey; j++){
    				if( canvas[i][j] == 1){
					printf(".");
      				}
      				else if( canvas[i][j] == 2) {
					printf("*");
      				}
      				else if( canvas[i][j] == 3) {
					printf("o");
      				}
      				else{
					printf(" ");
     			 	}
    			}
    			printf("\n");
  		}
  	return 0;

	}
		
	//else print to specified file
	FILE *fp;
	fp = fopen(file,"a");
	
	int i, j;
	for(i = 0; i < ssizex; i++){
    		for(j = 0; j < ssizey; j++){
    			if( canvas[i][j] == 1){
				fprintf(fp, ".");
      				}
      			else if( canvas[i][j] == 2) {
				fprintf(fp, "*");
      			}
      			else if( canvas[i][j] == 3) {
				fprintf(fp, "o");
      			}
      			else{
				fprintf(fp, " ");
     			 }
    		}
    		fprintf(fp, "\n");
  	}
	fclose(fp);
  	return 0;
}
