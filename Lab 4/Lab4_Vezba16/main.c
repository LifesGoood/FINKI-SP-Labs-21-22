#include <stdio.h>
#include <stdlib.h>

int main()
{
   int rev,a,j=0,number,b,doubled;
   scanf("%d %d",&a,&b);
   for(;a<=b;a++){
    rev=0;
    number=a;
    doubled=number*2;
    while(number){
        rev=10*rev+number%10;
        number=number/10;
    }
    if((a+rev)<=doubled){
        printf("%d\n",a);
        j++;
    }
   }
printf("Vkupno: %d\n",j);

    return 0;
}
