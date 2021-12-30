#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,x;
    scanf("%d",&x);
    x=x/2+1;

    for(int i=1;i<=x;i++){
        for(int j=1;j<=x-i;j++){
            printf(" ");
        }
                for(int l=1;l<=((2*i)-1);l++){
                    printf("*");
                }


        printf("\n");
    }
    return 0;
}
