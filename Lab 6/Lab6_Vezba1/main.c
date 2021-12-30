#include <stdio.h>
#include <stdlib.h>

int main()
{
  int array[100][100],d1=0,d2=0,k1=0,k2=0,n,n1,i,j;
  char c='*';
  scanf("%d",&n);
  scanf("%d",&n1);



  for(int i=0;i<n;i++){
  for(int j=0;j<n1;j++){
    //   printf("[%d][%d]:", i, j);
     scanf("%d",&array[i][j]);
    }
  }

  printf("\n");
//   (array[i+1][j+1]==1 || array[i-1][j-1]==1 || array[i+1][j-1]==1 || array[i-1][j+1]==1)

  for(int i=0;i<n;i++){
  for(int j=0;j<n1;j++){
    //   printf("[%d][%d]:", i, j);
     if(array[i][j]==1){
        printf("%c ",c);
    }else{
     printf("%d ",array[i][j]);
    }
    }
     printf("\n");
  }

 for(int i=0;i<n;i++){
  for(int j=0;j<n1;j++){
         if(array[i][j]==0){
        while((array[i+1][j+1]==1 || array[i-1][j-1]==1 || array[i+1][j-1]==1 || array[i-1][j+1]==1)){
            array[i][j]++;
            break;
        }
         }



        }
        }








for(int i=0;i<n;i++){
  for(int j=0;j<n1;j++){
    //   printf("[%d][%d]:", i, j);

     printf("%d ",array[i][j]);

    }
     printf("\n");
  }


    return 0;
}

