#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,i=0,x,z1,z2,z3,z4,z5,z6,z7;
    scanf("%d",&x);
    y=x;
    while(x != 0){
        x/=10;
        i++;

    }
  if(i == 7){
    printf("%d\n",y/1000000);
    printf("%d\n",y/100000%10);
    printf("%d\n",y/10000%10);
    printf("%d\n",y/1000%10);
    printf("%d\n",y/100%10);
    printf("%d\n",y/10%10);
    printf("%d\n",y%10);

    z1=y/1000000;
    z2=y/100000%10;
    z3=y/10000%10;
    z4=y/1000%10;
    z5=y/100%10;
    z6=y/10%10;
    z7=y%10;


    printf("%d\n",z1+z2+z3+z4+z5+z6+z7);
    printf("%d\n",z1*z2*z3*z4*z5*z6*z7);
  }else{
  printf("Vneseniot broj ne e 7 cifren!");
  }
    return 0;
}
