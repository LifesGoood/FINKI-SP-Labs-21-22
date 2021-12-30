#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100][100],d=0,k=0,c=0,n,i,j,niza=0,z=0,tmp=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(array[i][j]>tmp){
                tmp=array[i][j];
                c++;
            }
            else{
                c=1;
                tmp=array[i][j];
            }
            if(c>d){
                d=c;
            }
        }
        c=0;
        tmp=0;
    }
    printf("%d",d);
    return 0;
}
