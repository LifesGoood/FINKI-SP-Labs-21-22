#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,d,d2,d3;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    scanf("%d %d",&x3,&y3);

    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    d2=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    d3=sqrt(pow(x1-x3,2)+pow(y1-y3,2));

    if(d>d2 && d>d3){
        printf("AB");
    }
    if(d2>d && d2>d3){
        printf("BC");
    }
    if(d3>d2 && d3>d){
        printf("AC");
    }


    printf("%d\n%d\n%d\n",d,d2,d3);
    return 0;
}
