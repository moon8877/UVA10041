#include <stdio.h>
#include <stdlib.h>
int main(){
   int time;                        /*how many test case*/
   int i=0;                     
   int family;                       /*how many famiy*/
   int j=0;    
   int data;                  
   int dis[500]={0};
   int vito;
   int sum;
   int k,l;
   scanf("%d",&time);
   while(i<time)
   {
      scanf("%d",&family);
      while(j<family)               /*distance*/
      {
         scanf("%d",&data);
         dis[j]=data;
         j++;
      }
      
      for(k=family-1;k>=1;k--)   /*bubble sort*/
      {
          for(l=0;l<k;l++)
          {
              if(dis[l]>dis[l+1])
              {
                 int temp=dis[l];
                 dis[l]=dis[l+1];
                 dis[l+1]=temp;
              }
          }
      }
     
      if(family%2==1)
      {
        vito=dis[family/2];
        
      }
      else
      {
        vito=(dis[family/2]+dis[family/2-1])/2;
      }
      j=0;
      while(j<family)
      {
       sum=sum+abs(vito-dis[j]);
       j++;
      }
      printf("%d\n",sum);
      j=0;
      sum=0;
      i++;
   }



return 0;
}
