#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n,rev,k,j=0,number;
    scanf("%d",&n);
    if(n<10){
        printf("Brojot ne e validen");
    }
    x=n-1;
    for(;n>9;n--){
                j=0;
                rev=0;

        k=n-1;
        number=n-1;
        while(k){
            k=k/10;
            j++;
        }

        while(number){
        rev=10*rev+number%10;
        number=number/10;

            }
            if(rev%j==0){
    printf("%d\n",n-1);
    break;
            }

    }
    return 0;
}

