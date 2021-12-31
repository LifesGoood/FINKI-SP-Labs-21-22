#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,a=1,i,n,digit,tmp=0,tmp1=0,nula=0,eden=0,dva=0,tri=0,cetiri=0;
  while(a){
    if ( 1 != scanf("%d",&x) )
    break;
    n=x;
    for(int i=0;n>0;i++){
        digit=n%10;
        n=n/10;
        if(digit>tmp){
            tmp=digit;
            tmp1=i;
        }
    }
    if(tmp1==0){
        nula++;
    }
    if(tmp1==1){
        eden++;
    }
    if(tmp1==2){
        dva++;
    }
    if(tmp1==3){
        tri++;
    }
    if(tmp1==4){
        cetiri++;
    }
tmp=0;
tmp1=0;
  }
  printf("0: %d\n",nula);
printf("1: %d\n",eden);
printf("2: %d\n",dva);
printf("3: %d\n",tri);
printf("4: %d\n",cetiri);
    return 0;
}
