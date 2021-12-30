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
    printf("opagacki1\n");
    else
    printf("ne-opagacki0\n");
    }
    return 0;
}
int rek(int n)
{
    int t;
    t=n;
    if(n%10>=n)
    {
        return 1;
         printf("hi1");

    }
     else if((n/10)%10<=n%10)
    {
        printf("hi2");
        return 0;
    }
    else if((n/10)%10>n%10)
    {
         printf("hi3");
         while(t){
            if(((t/10)%10==t%10)){
                return 0;
                break;
            }
            t=t/10;
         }
        return 1;

    }
    else
    {
         printf("hi4");
        return 0;
    }
}
