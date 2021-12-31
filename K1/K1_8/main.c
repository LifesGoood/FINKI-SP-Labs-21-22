#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,c=0;
   scanf("%d%d",&n,&x);
   for(int i=n-1,a=1;a;i--){
    for(int j=i;j>0;j/=10){
        for(int k=x;k>0;k/=10){
            if(j%10==k%10) c++;
        }
    }
    if(c==0){
        printf("%d",i);
        break;
    }
    c=0;
   }

    return 0;
}





/*#include<stdio.h>
int main(){
    int n,x,c=0;
    scanf("%d%d",&n,&x);
    for(int i=n-1,a=1;a;i--){
        for(int j=i;j>0;j/=10){
            for(int k=x;k>0;k/=10){
                if(j%10==k%10) c++;
            }
        }
        if(c==0){ printf("%d",i); return 0;}
        c=0;
    }
}
*/
