

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,limit,sum=0,broj,digit=0,flag=1,ammount=0,j=0;
   float procent;
   int arr[4];
   scanf("%d",&limit);
   scanf("%f.2",&procent);
   float P=100/procent;

   for(i=1;i<limit;i++){
    broj=i;
    while(broj>0){
    digit=broj%10;
    broj=broj/10;
    sum=sum+digit;
    }

  //  printf("%d\n",sum);

     if((((float)i/(float)sum) == (float)P) && (ammount < 5)){
        //printf("%d\n",i);
        ++j;
        arr[j]=i;
        flag=2;
        ammount++;
     }

    sum=0;
   }
//printf("%d",sum);
 if(flag==1){
    printf("NEMA");
 }else{
 for(;j>0;j--)
 printf("%d\n",arr[j]);
 }
    return 0;
}
