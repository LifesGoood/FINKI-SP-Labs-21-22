#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,D;
    double x1,x2;
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;


    if(D == 0){
       x1= (-b+sqrt(D))/(2*a);
       printf("Dvojno reshenie na ravenkata e: %.2f",x1);
    }
    if(D > 0){
       x1= (-b+sqrt(D))/(2*a);
       x2= (-b-sqrt(D))/(2*a);
       printf("Reshenija na ravenkata se: %.2f i %.2f",x2,x1);
    }
    if(D < 0){
       printf("Ravenkata nema realni reshenija");
    }
    return 0;
}
