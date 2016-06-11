#include<stdio.h>
#include<math.h>
int main(void){
int x_value,y_value,sq_x,spacing1,spacing2=0;
double gap=0;
for(y_value=0;y_value<6;y_value++)
	printf("\n");
for(y_value=6;y_value<=24;y_value++){
	sq_x=81-((y_value-15)*(y_value-15));
	gap=sqrt((double)sq_x);
	for(spacing1=0;spacing1<x_value-1;spacing1++)
		printf(" ");
	if(y_value!=24&& y_value!=6)
		printf("*");
	for(spacing2=0;spacing2<(2*gap);spacing2++)
		printf(" ");
	printf("\n");
}
return 0;
}
