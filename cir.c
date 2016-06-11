#include<stdio.h>
#include<math.h>

   int main(void){
    int x=0,y=0;
    int value=0;
    int spc=0;
    int count =0;
    int cnt=0;
    int root1=0;
    int diff=0;int spcd=0;
    while( y<=25){
	cnt=0;value=0;
           if(y>=7)
           {
                diff=(int)sqrt(81-(y-16)*(y-16));
                for(root1=20-diff;root1>0;root1--)
		{
			printf(" ");
		}

                      spcd=diff;
                x=0;
                while(x<=29)
                {     x++;
                      
                      if((81-(x-20)*(x-20))<0)
                      {continue;}
                      else
                      {
                          value=(int)sqrt(81-(x-20)*(x-20));
                           if(y==16+value)
                           {  
                              cnt++;
                              printf("*");
                               }
                           if(y==16-value)
                           {
                               
                               cnt++;
                               printf("*");
                               }
                               if(cnt==2)
                               {
                               printf("\n");
                               break;
                               }
                                if(cnt==1&&(y==8||y==26))
                               {
                               printf("\n");
                               break;
                               }
                               if(cnt==1)
                               {
                                     
                               for(spc=spcd;spc>0;spc--){ 
                                     printf("  ");
                                     }
                                }
			}                      
		x++;
       }
                      }
                      else
                      {
                          printf("\n");
                          }
                y++;
                }
printf("\n");
                //getch();
       return 0;
}                                
