
/*
3
5 7 2 5 2 8
6 1 2 3 3 1 1
8 8 4 8 3 2 1 4 8
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
  int array[100000],n,n1,m,r=0,flag=0,c=0,z,s;
  scanf("%d",&n);

  for(;n>0;n--){
    scanf("%d",&n1);

  //  z=m/2;
 m=n1;
    while(n1>0){
        scanf("%d",&array[n1]);
        n1--;
    }

s=m;
r=0;
    for(;m>0;m--){
            r++;
            if(array[m]==array[r]){
                  c++;
                flag=1;
            }
        }


       if(flag==1){
        printf("%.2f%%\n",(float)c/s*100);
       }else{
       printf("%.2f%%\n",(float)c/s*100);
       }
c=0;

  }

    return 0;
}
