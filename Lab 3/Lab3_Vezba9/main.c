#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cena,struja,struja150,struja200,struja500;
    scanf("%d",&struja);
    struja=struja-500;
    struja500=struja;
     printf("%d ",struja500);
    struja=struja-150;
    struja150=struja;
     printf("%d ",struja150);
    struja=struja-200;
    struja200=struja;
     printf("%d ",struja200);

    struja500=struja500*5;
    struja150=struja150*7.5;
    struja200=struja200*11;
    struja=struja*1.18;
    cena=struja+struja500+struja150+struja200;
    printf("%d",cena);
    return 0;
}
