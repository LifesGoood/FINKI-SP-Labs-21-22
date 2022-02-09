#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float matrix[100][100],matrix2[100][100],d1=0,d2=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%f",&matrix[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j){
                d1=d1+matrix[i][j];
            }
            if(i+j>=n){
                d2=d2+matrix[i][j];
        }
    }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                matrix2[i][j]=d1;
            }else if(i+j==n-1){
                matrix2[i][j]=d2;
            }else{
            matrix2[i][j]=0;
            }
        }
    }
    if(n%2 != 0){
matrix2[n/2][n/2]=d1+d2;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%.1f ",matrix2[i][j]);
        }
        printf("\n");
    }


  //  printf("%.1f %.1f",d1,d2);

    return 0;
}
