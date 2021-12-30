#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int n,a,b,c,d,x=100000;
   scanf("%d",&n);
   while(n){
    scanf("%d %d %d",&a,&b,&c);
//  d = |(a-b)| + |(b-c)|
    d= abs(a-b) + abs(b-c);

    if(d<x){
        x=d;
    }
n--;
   }
   printf("%d",x);
    return 0;
}
