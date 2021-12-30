#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,array[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
            if(array[i]%2==0){
        printf("%d ",array[i]+1);
    }
    if(array[i]%2!=0){
        printf("%d ",array[i]-1);
    }
    }


    return 0;
}
