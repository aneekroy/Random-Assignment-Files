#include<stdio.h>
#include<math.h>
int prime(int m){
	int cnt=0;
	int flag=1;
	for(cnt=2;cnt<=(int)sqrt(m);cnt++){

		if(m%cnt==0){
		flag=0;
		break;
		}

	}
	if(m==1)
		flag=0;
	return flag;
}
int div(int n){
	int d=2,c=0;
	if(!(prime(n))&&(n!=1)){d=0;
		for(c=1;c<=(int)(n/2);c++){
			if(n%c==0){
				d++;
			}
		}
		if(n!=1){++d;}
	}	
	if(n>1)return d;
	else if(n==1){
	return 1;
	}
	else 
	return (-1);
}

int main(){
	int t=0,cn=0,min=0,max=0,nd=0,num=0;
	printf("\n Enter Number of Test Cases : ");
	scanf("%d",&t);
	while(t--){
		min=0,max=0,nd=0,num=0;
		printf("\n Enter range :");
		scanf("%d",&min);
		scanf("%d",&max);
		for(cn=min;cn<=max;cn++){
			//printf("\n MIN is %d , MAX is %d \n",min,max);
			nd=div(cn);
			//printf("\n No of Divs for %d is %d\n",cn,nd);
			if(prime(nd)){
				num++;
			}	
			//printf("\n NUM is %d\n",num);
			nd=0;
		}
		printf("\nThe No. of Numbers with prime no. of Divisors are: %d\n",num);
		num=0;
		}
		return 0;
		}
