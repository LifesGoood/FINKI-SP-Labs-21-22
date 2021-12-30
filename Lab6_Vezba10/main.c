#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,k,array[100],m=0,m1=0,tmp[100],tmp1[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(array[i]<k){
              printf("%d ",array[i]);
        }
    }
for(int i=0;i<n;i++){
        if(array[i]>k){
              printf("%d ",array[i]);
        }
    }

    return 0;
}
