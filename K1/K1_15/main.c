#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,n,f=0,c=0,c1=0,a=0,array[1000],o,z;
    scanf("%d",&r);
o=r;
z=r;
    for(;r>0;r--){
        scanf("%d",&n);
        array[r]=n;
        if(n<50){
            f=f+n;
            c++;

        }
        if(n>=50){
            a=a+n;
            c1++;

        }


    }
    printf("Sredna vrednost na padnati %.2f\n",(float)f/c);
    for(;o>0;o--){
            if(array[o]<50){
        printf("%d ",array[o]);
    }
    }
    printf("\nSredna vrednost na polozeni %.2f\n",(float)a/c1);
    for(;z>0;z--){
            if(array[z]>=50){
        printf("%d ",array[z]);
    }
    }
    return 0;
}
