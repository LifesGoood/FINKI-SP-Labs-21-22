#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,x1,x2,x3,x4,x5,x6,x7,x8;
    char y;
    scanf("%d",&x);
    x1=x/10000000;
    x2=x/1000000%10;
    x3=x/100000%10;
    x4=x/10000%10;
    x5=x/1000%10;
    x6=x/100%10;
    x7=x/10%10;
    x8=x%10;


    printf("0%d%d/%d%d",x1,x2,x3,x4);
    printf("%d-%d%d%d ",x5,x6,x7,x8);

    if(x2==0 || x2==1 || x2==2){
    printf("T-mobile");
    }
    if(x2==5 || x2==6 || x2==7 || x2==8){
    printf("A1");
    }
    if(x2==9){
    printf("LycaMobile");
    }
    return 0;

}
