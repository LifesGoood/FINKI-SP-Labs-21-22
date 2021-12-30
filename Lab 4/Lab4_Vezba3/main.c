#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum=0,broj,digit,brojac=0;
    scanf("%d %d",&a,&b);
    for(;a<=b;++a){

        broj=a;
        sum=0;
        while(broj>0){
        digit=broj%10;
        broj=broj/10;
        if(digit%2 == 0){

           sum=sum+digit;
        }
        }
        if(sum!=0 && sum%4==0){
printf("%d\n",a);
brojac++;
    }
    }
     printf("Vkupno: %d",brojac);

    return 0;
}
