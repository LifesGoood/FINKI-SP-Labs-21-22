#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int n=26,tmp,move,or,ro;
   char element;
   scanf("%c",&element);
   scanf("%d",&move);

   if(move>25){
    or=move;
    move=(move/26)*26;
    ro=or-move;
    move=ro-26;
   }

   char array[26]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
   int i;
   for(i=0;i<n;i++){
    if(array[i]==element){
        tmp=i;
    }

   }
if(tmp+move>25){
    move=26-(tmp+move);
   move=abs(move);
   // printf("%d ",move);
   printf("%c ",array[move]);

       }else{



   printf("%c ",array[move+tmp]);
       }
    return 0;
}
