#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,x2,x3,x4,x5,n,y;
    scanf("%d",&n);
        x1=n/10000;
        x2=n/1000%10;
        x3=n/100%10;
        x4=n/10%10;
        x5=n%10;

    y=x1+(x2*10)+(x3*100)+(x4*1000)+(x5*10000);


    if(n < 10000 || n > 99999){
        printf("Nevaliden vlez");
    }else{


    if(n==y){
        printf("Palindrom");
    }else{
     printf("Ne e palindrom");
    }
    }
    return 0;
}
