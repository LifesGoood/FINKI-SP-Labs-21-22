#include <stdio.h>
#include <stdlib.h>

int main()
{
   int c,k,kg,p,t1,t2,v,b,m,d;
   scanf("%d",&kg);
   scanf("%d %d %d",&c,&k,&p);
   t1=c+(kg-k)*p;
   scanf("%d %d %d %d",&v,&b,&m,&d);
   t2=b+(kg*d)+((kg/v)*m);
   printf("%d ",t1);
   printf("%d\n",t2);
   printf("%d\n", (t1<=t2)? 1:0);
    return 0;
}
