#include <stdio.h>
#include <stdlib.h>

int main()
{
 int m,n,counter=0,matrix[100][100];
 scanf("%d%d",&m,&n);
 for(int i=0;i<m;i++){
 for(int j=0;j<n;j++){

  scanf("%d",&matrix[i][j]);

 }
 }
 printf("\n");

 for(int i=0;i<m;i++){
 for(int j=0;j<n;j++){
printf("[%d][%d]:", i, j);
  printf("%d ",matrix[i][j]);

 }
 printf("\n");
 }

 for(int i=0;i<m;i++){
 for(int j=0;j<n;j++){

  if(  (matrix[i][j]==1 && matrix[i+1][j]==1 && matrix[i+2][j]==1 && matrix[i+3][j]==0)  ){
    printf("[%d][%d]:", i, j);
    counter++;
  }
  if(   (matrix[i][j]==1 && matrix[i][j+1]==1 && matrix[i][j+2]==1 && matrix[i][j+3]==0) ){
    printf("[%d][%d]:", i, j);
    counter++;
  }

 }
 printf("\n");
 }


printf("%d",counter);

    return 0;
}
