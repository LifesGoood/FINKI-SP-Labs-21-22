#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,indeks;
    int n,id,one[100],two[100],three[100],o=0,t=0,tr=0;
    scanf("%d",&x);
    for(int i=0;i<x;x--){
    scanf("%d",&indeks);
        if(indeks%10<3){
            one[o]=indeks;
            o++;
        }
        else if(indeks%10<6){
            two[t]=indeks;
            t++;
        }
        else if(indeks%10<10){
            three[tr]=indeks;
            tr++;
        }
    }
    printf("\nGrupa 1 \n");
    for(int i=0;i<o;i++){
        printf("%d ",one[i]);
    }

    printf("\nGrupa 2 \n");
    for(int i=0;i<t;i++){
        printf("%d ",two[i]);
    }

    printf("\nGrupa 3 \n");
    for(int i=0;i<tr;i++){
        printf("%d ",three[i]);
    }
    return 0;
}
