#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,digit,digit1,n1,flag1,a=1,flag=0,n100,m,z,rev;
   while(a){

    if ( 1 != scanf("%d",&n) )
    break;
    if(n<=9){
        continue;
    }
z=n;
n100=n;
n1=n;
rev=0;
while(z){
    rev=10*rev+z%10;
    z=z/10;
}
n=rev;
n1=rev;
m=n;


    while(n){
        flag=0;
    digit=n%10;
    n=n/10;
  //  printf("-> %d\n",digit);
   if(digit>=5){
    flag=1;
    digit=n%10;
    n=n/10;
    if(digit<5){
        flag=1;
    }else{
        flag=0;
    break;
    }
   }else{
       flag=0;
   break;
   }
   }
   while(n1){
        flag1=0;
    digit1=n1%10;
    n1=n1/10;
  //  printf("-> %d\n",digit);
   if(digit1<5){
    flag1=1;
    digit1=n1%10;
    n1=n1/10;
    if(digit1>=5){
        flag1=1;
    }else{
        flag1=0;
    break;
    }
   }else{
       flag1=0;
   break;
   }
   }









if(flag==1 || flag1==1){
printf("%d\n",n100);
}

   }
    return 0;
}
