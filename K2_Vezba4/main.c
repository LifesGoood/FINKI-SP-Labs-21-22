#include <stdio.h>
#include <stdlib.h>

int main()
{
   int m,n,matrix[100][100],i1,j1;
   scanf("%d%d",&m,&n);
    printf("[%d][%d]\n", m, n);
   for(int i=0;i<m;i++){
   for(int j=0;j<n;j++){
      //   printf("[%d][%d]:", i, j);
    scanf("%d",&matrix[i][j]);
   }
   //
   }
   scanf("%d%d",&i1,&j1);
   printf("\n");
   for(int i=0;i<m;i++){
   for(int j=0;j<n;j++){
         printf("[%d][%d]:", i, j);
    printf("%d ",matrix[i][j]);
   }
    printf("\n\n");
   }
   int k1=0;
   int k2=0;
   int k3=0;
   int k4=0;

    for(int i=0;i<m;i++){
   for(int j=0;j<n;j++){

        if(i>=i1 && j>=i1){
printf("[%d][%d]:", i, j);
     k1=k1+matrix[i][j];
        }

        if(j>=j1 && i<i1){
//printf("[%d][%d]:", i, j);
     k3=k3+matrix[i][j];
        }
        if(i>=i1 && j<j1){
//printf("[%d][%d]:", i, j);
     k4=k4+matrix[i][j];
        }

        if(i<i1 && j<i1){
//printf("[%d][%d]:", i, j);
     k2=k2+matrix[i][j];
        }
     }
     printf("\n");
    }
    printf("%d ",k3);
    printf("%d ",k2);
    printf("%d ",k4);
    printf("%d ",k1);
    return 0;
}
