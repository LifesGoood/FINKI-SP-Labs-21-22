#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int m,n,matrix[100][100],sum1=0,sum2=0,pola,j;
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    pola= n/2;
   // printf("%d",pola);
    for(int i=0;i<m;i++){
        for( j=0;j<pola;j++){
            sum1=sum1+matrix[i][j];
            sum2=sum2+matrix[i][n-j-1];
        }
    //    printf("%d",sum1-sum2);
        matrix[i][pola]=abs(sum1-sum2);
        if(n%2==0){
      matrix[i][pola-1]=abs(sum1-sum2);
        }
        sum1=0;
        sum2=0;
    }
 //printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
         printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
