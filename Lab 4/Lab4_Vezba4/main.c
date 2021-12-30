#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,broj,sum=0,digit,brojac=0;
   scanf("%d %d",&a,&b);
   for(;a<=b;a++){
        sum=0;
   broj=a;
   while(broj){
    digit=broj%10;
    broj=broj/10;
    if(digit%2==0 && digit%3!=0){
        sum=sum+digit;
    }

   }
   if(sum>0 && sum%7==0){
printf("%d\n",a);
brojac++;
   }
   }
    printf("Vkupno: %d",brojac);
    return 0;
}
