#include <stdio.h>
#include <stdlib.h>

int main()
{
   int money,cake;
   scanf("%d",&money);
   scanf("%d",&cake);
   cake=cake*1.18;
   money=money-cake;
   printf("%d",(money>0)? 1:0);
    return 0;
}
