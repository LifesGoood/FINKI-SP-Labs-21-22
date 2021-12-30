#include <stdio.h>
#include <stdlib.h>

int main()
{
    int coinz,coin,i;
    scanf("%d",&coinz);
    for(i=1;i<=5;i++){
    scanf("%d",&coin);
    coinz=coinz-(-coin);

    }
    printf("%d",(coinz>0)? 1:0);

    return 0;
}
