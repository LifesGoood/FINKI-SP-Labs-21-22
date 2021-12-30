#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,a1,a2,a3,a4,a5;
    scanf("%d",&a);
    a1=a/10000;
    a2=a/1000%10;
    a3=a/100%10;
    a4=a/10%10;
    a5=a%10;
    printf("%d ",a1+a5);
    printf("%d ",a2+a4);
    printf("%d ",a3);

    return 0;
}
