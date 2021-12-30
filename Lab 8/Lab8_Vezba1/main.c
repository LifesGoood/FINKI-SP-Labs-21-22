#include <stdio.h>
#include <stdlib.h>
int rek(int n);
int main()
{
    int m;
    scanf("%d",&m);
    for(;m>0;m--){
    int n;
    scanf("%d",&n);
    if(rek(n))
    printf("1\n");
    else
    printf("0\n");
    }
    return 0;
}
int rek(int n)
{

    int x,t=n;

    if(n == 0)
    {
        return;
    }
    if(n%10>=n)
    {
        return 1;


    }
    else if((n/10)%10<=n%10)
    {

        return 0;
    }else if((n/10)==n%10){
    return 1;
    }
    else
    {
        while(t){
            if(((t/10)%10==t%10)){
                return 0;
                break;
            }
            t=t/10;
         }
        return 1;
    }
    rek(n/10);
    n=n%10;
}



////////////////////////////////////
