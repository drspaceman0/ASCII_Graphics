#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 15, y = 15;
	char *filename = "artpiece.txt";
	initAArt( x, y );
	
	point(0,0,1);
	printf("Point function at (0,0).\n");
	drawAArt(x,y,"stdout");

	lineabs(1,1,9,9,2);
	printf("Absolute Line function at (1,1) to (9,9).\n");
	drawAArt(x,y,"stdout");

	linerel(1,9,3);
	printf("Relative Line function at from last current place to (1,9).\n");
	drawAArt(x,y,"stdout");	

	rect(0,4,7,2,1);
	printf("Rectangle function at from lower left (0,4) to uper right (7,2).\n");
	drawAArt(x,y,"stdout");

	circle(7,7,5,3);
	printf("Circle function at center (7,7) with radius of 5.\n");
	drawAArt(x,y,"stdout");

	printf("Now printing art to specified file.\n");
	drawAArt(x,y,filename);


  return 0;
}
