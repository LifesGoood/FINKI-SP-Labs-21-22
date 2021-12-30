#include <stdio.h>
#include <stdlib.h>

int main()
{
  int m,n;
  float nsum;
  float total=0,sum=0;
  float iznos;
  float tax;
  float taxr;
  float ntax;
  char danok;
  scanf("%d",&m);
  while(m>0){
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

  taxr=(tax/100.0)*15.0;

  if(sum>nsum && sum<=30000){
    nsum=sum;
  }
  if(taxr>ntax && taxr<300){
    ntax=taxr;
  }
  if(sum>30000){
    printf("Sum %.f is bigger than 30000\n",sum);
  }else{

 // printf("Iznos bez danok %.2f\n",sum);
 // printf("Iznos so danok %.2f\n",total);
//  printf("%d\n",total-sum);
   printf("Total tax return is: %.2f\n",taxr);
  }
   tax=0;
 //  taxr=0;
   sum=0;
   total=0;
   m--;
  }
  printf("Max amount of reciept: %.2f. ",nsum);
  printf("Max tax return for reciepts: %.2f",ntax);
    return 0;
}
