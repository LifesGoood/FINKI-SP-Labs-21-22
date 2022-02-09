#include <stdio.h>
#include <stdlib.h>

int main()
{
   int matrica[100][100];
   int m,n;
   scanf("%d",&m);
   n=m*2;
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&matrica[i][j]);
    }
   }



   for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        printf("%d ",matrica[i][j]);
    }
    printf("\n");
   }


   for(int i=0;i<m;i++){
    for(int j=m;j<n;j++){
        printf("%d ",matrica[i][j]);
    }
    printf("\n");
   }
    return 0;
}
