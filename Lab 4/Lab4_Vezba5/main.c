#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  float total=0,sum=0;
  float iznos;
  float tax;
  char danok;
  scanf("%d",&n);
  while(n>0){
    scanf("%f %c",&iznos,&danok);
    sum=sum+iznos;
    if(danok == 'A'){
        iznos=iznos*1.18;
    }
    if(danok == 'B'){
        iznos=iznos*1.05;
    }
    if(danok == 'V'){
        iznos=iznos*1.0;
    }
    total=total+iznos;
    n--;
  //  printf("%d\n",total);
  //  printf("%d\n",sum);
  tax=total-sum;

  }

 // printf("Iznos bez danok %.2f\n",sum);
 // printf("Iznos so danok %.2f\n",total);
//  printf("%d\n",total-sum);
   printf("Total tax return is: %.2f\n",(tax/100.0)*15.0);
    return 0;
}
