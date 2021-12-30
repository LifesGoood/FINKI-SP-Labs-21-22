#include <stdio.h>
#include <stdlib.h>



int main()
{
    int array[100][100],n,r1=0,r2=0,r3=0,r4=0;
    scanf("%d",&n);

     for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
     //  printf("[%d][%d]:", i, j);
     scanf("%d",&array[i][j]);
    }
  }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(((i<=(n/2)) && (j<=(n/2)) && i!=n/2 && j!=n/2)){
            r1=r1+array[i][j];
        //    printf("%d\n",r1);
        }
             if(((i<=(n/2)) && (j>=(n/2)) && i!=n/2 && j!=n/2)){
            r2=r2+array[i][j];
        //    printf("%d\n",r1);
        }
        if((i>=(n/2)) && (j<=(n/2)) && i!=n/2 && j!=n/2){
            r3=r3+array[i][j];
          //  printf("%d\n",r2);
        }
        if((i>=(n/2)) && (j>=(n/2)) && i!=n/2 && j!=n/2){
            r4=r4+array[i][j];
          //  printf("%d\n",r2);
        }
        }
    }
    printf("%d ",r1);
    printf("%d\n",r2);
    printf("%d ",r3);
    printf("%d\n",r4);
    //printf("%d",n/2);
    return 0;
}


