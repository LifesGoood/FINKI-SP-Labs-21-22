#include <stdio.h>
#include <stdlib.h>

int main()
{
  int array[100][100],d1=0,d2=0,k1=0,k2=0,n,i,j;
  scanf("%d",&n);

  for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    //   printf("[%d][%d]:", i, j);
     scanf("%d",&array[i][j]);
    }
  }
  for(i=0;i<n;i++){
    d1=d1+array[i][i];
    d2=d2+ array[i][n-i-1];
    k1=k1+array[i][0];
    k2=k2+array[i][n-1];
  }



  for(i=0;i<n;i++){
  for(j=0;j<n;j++){
    printf("%d",array[i][j]);

    }
         printf("\n");
  }

   printf("%d",d1-d2);
   printf("%d\n",k1-k2);

    return 0;
}
