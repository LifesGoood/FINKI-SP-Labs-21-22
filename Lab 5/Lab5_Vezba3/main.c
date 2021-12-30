#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,z=0,y,g=10000000,i=0,broj;
    scanf("%d",&x);
    while(x>0 && x<=90){
    while(x<=90 && i<7){

        broj=x;
        y=broj%10;
        broj=broj/10;
        g=g/10;
        z=z+y*g;
        scanf("%d",&x);
        i++;
    }
     z=z+x;
     scanf("%d",&x);


    }
    printf("%d",z);

    return 0;
}


/* while(x<=90)
    {
        broj=x;
        y=broj%10;
        broj=broj/10;
        z=z+y;
        scanf("%d",&x);
    }*/
