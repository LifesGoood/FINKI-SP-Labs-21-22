#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d",&x);
    if(x%3==0 && x%5!=0){
        printf("Tik");
    }
    if(x%5==0 && x%3!=0){
        printf("Tak");
    }
    if(x%3==0 && x%5==0){
        printf("Tik - Tak");
    }
    if(x%3!=0 && x%5!=0){
        printf("Losh Broj");
    }


    return 0;
}
