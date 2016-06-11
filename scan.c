#include<stdio.h>
int main(void){
int a[10];int i=0;
for(i=0;i<10;i++){
scanf("%1d",(a+i));
}
printf("\n");
for(i=0;i<10;i++){
printf("%d",a[i]);
}
return 0;
}

