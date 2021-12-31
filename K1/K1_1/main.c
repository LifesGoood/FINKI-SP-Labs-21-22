#include <stdio.h>
#include <stdlib.h>

int main()
{
   int digit,j=4,m,n,x,flag=1;
   scanf("%d %d",&m,&n);
   for(;m<=n;m++){
        x=m;
    while(x){

        digit=x%10;
        x=x/10;
        if(digit%2 == 0){
            flag=0;
        }
        if(digit%2 != 0){
            flag=1;
            break;
        }
    }
   if(flag==0){
        printf("%d\n",m);
        j++;
        break;
    }
    flag=1;
   }
        if(j==4){
            printf("NE");
        }
    return 0;
}
