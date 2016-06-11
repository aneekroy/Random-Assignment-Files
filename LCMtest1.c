#include<stdio.h>
int gcd(int a,int b){
	if(b==0){	printf("\n a=%d ,b=%d",a,b);
			return a;
		}
	else{
	printf("\n a=%d ,b=%d",a,b);
		return gcd(b,a%b);
	}
}
		
int main(void){
	int a=0,b=0;
	scanf("%d %d",&a,&b);
	printf("\n %d is the GCD of %d and %d\n",gcd(a,b),a,b);
	return 0;
}

