#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,x,t=0,zbir=0,c1,n,a=1;
    while(a){

    if ( 1 != scanf("%d",&x) )
    break;
    n=x;
    while(n){
    c1=n%10;
    n=n/10;
    zbir=zbir+c1;
    }

    printf("%d: %d\n",x,zbir+t);
    t=0;
     n=x;
    while(n){
    c1=n%10;
    n=n/10;
    if(c1>t){
        t=c1;
    }
    }

    zbir=0;


    }
    return 0;
}
