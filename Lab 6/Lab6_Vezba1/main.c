#include <stdio.h>
#include <stdlib.h>

int main()
{ 
   int m,n,matrix[100][100],matrix2[100][100];
   scanf("%d%d",&m,&n);
  //  printf("[%d][%d]\n", m, n);
   for(int i=0;i<m;i++) {
       for(int j=0;j<n;j++) {
          //   printf("[%d][%d]:", i, j);
        scanf("%d",&matrix[i][j]);
       }
   }

  
   
  for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
            int sum = 0;
            if( matrix[i][j] != 0)
                 printf("* ");
            else{
            for(int k = i-1;k<= i+1;k++){
               for(int l = j-1;l<=j+1;l++){
                   if(k>=0 && l>= 0 && k<m && l<n)
                    sum+=matrix[k][l];
               }
            }
          
          
            printf("%d ",sum);}
        }
    printf("\n");
   }
  
    return 0;
}
