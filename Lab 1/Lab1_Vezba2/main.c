#include <stdio.h>
#include <stdlib.h>

int main()
{
    int money;


    scanf("%d",&money);

    printf("%d*5000\n",money/5000);
    printf("%d*1000\n",(money%5000)/1000);
    printf("%d*500\n",(money%1000)/500);
    printf("%d*100\n",(money%500)/100);
    printf("%d*50\n",(money%100)/50);
    printf("%d*10\n",(money%50)/10);
    printf("%d*5\n",(money%10)/5);
    printf("%d*2\n",(money%5)/2);

    printf("%d*1\n",(money%5)%2);

    return 0;
}
