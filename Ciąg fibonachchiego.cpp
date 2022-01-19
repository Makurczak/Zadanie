#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a,ap,app,N,i;
  scanf("%d",&N);
  app=0;
  ap=1;
  
  for(i=1;i<=N;i++)
  {a=ap+app;
   printf("%d\n",a);
   app=ap;
   ap=a;
   
  
  }
  return 0;
}
  
  
  
  
  
  
  
  
  






