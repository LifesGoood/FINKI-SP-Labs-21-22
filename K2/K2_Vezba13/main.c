#include <stdio.h>
#include <stdlib.h>

int main()
{
   int matrica[100][100];
   int zbir;
   int m,n,n1,sum=0;
   scanf("%d",&zbir);
   scanf("%d %d",&m,&n);
   n1=n;
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&matrica[i][j]);
    }
   }
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        sum=sum+matrica[i][j];
    }
    if(sum>zbir){
        while(n1>0){
        printf("1 ");
        n1--;
        }
    }else if(sum<zbir){
        while(n1>
              0){
        printf("-1 ");
        n1--;
        }
    }else if(sum==zbir){
        while(n1>0){
        printf("0 ");
        n1--;
        }

    }

        n1=n;
        sum=0;
        printf("\n");





   }




    return 0;
}
