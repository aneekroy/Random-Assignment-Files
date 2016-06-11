#include<stdio.h>
#include<string.h>
int main(void){
	int a[50],b[50],sum[51];int c=0,d=0,e=0,f=0,g=0,carry=0,i,j,k,m=0,p=0,s=0,sd=0,z=0,tu,l=0;
	char str1[50],str[50];
	scanf("%s %s",&str1,&str);
	printf("\n");
	while(str1[c]!='\0')
	c++;
	while(str[d]!='\0')
	d++;
	for(i=c-1;i>=0;i--)
	{
		a[e]=str1[i]-'0';
		e++;
			
	}
	for(sd=e;sd<50;sd++)
	a[sd]=0;
	for(j=d-1;j>=0;j--)
	{
		b[f]=str[j]-'0';
		f++;
		
	}
	for(tu=f;tu<50;tu++)
	b[tu]=0;
		while(g<51 && m<50){
		if((a[m]+b[m]+carry)>=10){
			sum[g]=(a[m]+b[m]+carry)%10;
			carry=(a[m]+b[m]+carry)/10;
			
		}
		else{
			sum[g]=(a[m]+b[m]+carry)%10;
			carry=0;
		}
		
		m++;
		g++;
		
	}
	l=g;
	for(k=g-1;k>=0;k--){
	
         if(sum[k]==0)
         l--;
         if(l!=k)
		printf("%d",sum[k]);}
}
