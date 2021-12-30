#include <stdio.h>
#include <stdlib.h>
int elka(int x);
int main()
{
    int m,x;
    scanf("%d",&x);
    x=x/2+1;

    elka(x);
    return 0;
}
int elka(int x){
 for(int i=1;i<=x;i++){
        for(int j=1;j<=x-i;j++){
            printf(" ");
        }
                for(int l=1;l<=((2*i)-1);l++){
                    printf("*");
                }


        printf("\n");
    }
}
