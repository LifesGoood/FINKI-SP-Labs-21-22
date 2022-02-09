#include <stdio.h>
#include <stdlib.h>

int sum_pos(int *n1,int ind,int n){
int sum=0;
 for(int i=ind;i<n;i++){
    sum=sum+*(n1+i);
    }
return sum;
}

int main()
{
    int ind,n,n1[100],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&*(n1+i));
    }
    scanf("%d",&ind);

    printf("%d",sum_pos(n1,ind,n));
    return 0;
}
