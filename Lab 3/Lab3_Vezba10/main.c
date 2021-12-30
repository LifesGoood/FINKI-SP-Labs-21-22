#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,x1,x2,x6,x7;
    scanf("%d",&x);
    x1=x/1000000;
    x2=x/100000%10;
    x6=x/10%10;
    x7=x%10;

    if(x7==0){
        printf("Nevaliden broj");
    }

    if(x%x1==0 && x%(x6+x7)!=0){
        printf("DA");
    }
    else if(x%x2!=0 && x%(x6+x7)!=0){
        printf("DA");
    }else{
    printf("NE");
    }


    return 0;
}

