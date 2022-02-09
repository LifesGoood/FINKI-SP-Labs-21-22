#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int tmp=-1000,tmp1,m,n,matrix[100][100],i,j;
   float as=0,as1;
 scanf("%d%d",&m,&n);
 for( i=0;i<m;i++){
 for( j=0;j<n;j++){

  scanf("%d",&matrix[i][j]);

 }
 }
 for( i=0;i<m;i++){
    for( j=0;j<n;j++){
        as=as+matrix[i][j];
    }
// printf("-> %.1f\n",as/n);

 for(j=0;j<n;j++){
        as1=as/n;
    if(abs((matrix[i][j])-as1)>(tmp)){
        tmp=abs(matrix[i][j]-as1);
        tmp1=matrix[i][j];
       // printf("%d ",tmp1);
    }
 }
printf("\n");
 printf("%d ",tmp1);
 tmp=-1000;
 as=0;

}





// printf("%d\n",tmp);
 return 0;
}
