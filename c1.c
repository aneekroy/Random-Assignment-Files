#include<stdio.h>
#include<math.h>
int main(void){
	
int y;
	float count,x;
	printf("\nCircle of radius 9 unit centered at (20,12)\n");
	for(count=1;count<=6;count++)
		printf("\n");
	for(y=-18;y<=18;y++){
		x=0.5+sqrt(324 - y*y);
		for(count=1;count<=40-x;count+=0.5)
		printf(" ");
		printf("x");
		for(count=1;count<2*x;count+=0.5)
		printf(" ");
		printf("\n");
	}
	return 0;
}
