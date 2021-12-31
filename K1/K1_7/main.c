#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){

       if(j==1 || j==n){
        printf("%%");
       }else if(i==1 || i==n){
       printf("@");
       }else{
       printf(".");
       }

    }
    printf("\n");
    }



    return 0;
}
