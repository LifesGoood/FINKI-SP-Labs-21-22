#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,second,digit1,found=0,broj;
    scanf("%d %d",&n1,&n2);
    while(n1>0){
        found=0;
    digit1=n1%10;
    second=n2;
     broj=second;
    while(second>0){

        second=broj%10;
        if(second==digit1){
            found=1;
        }
        broj=broj/10;
    }
    if(found==0){
        printf("NE");
        return 0;
    }
 n1=n1/10;
    }


    printf("DA");
    return 0;
}
