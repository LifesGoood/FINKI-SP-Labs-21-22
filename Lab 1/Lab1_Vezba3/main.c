#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bmi;
    float masa,visina;
    scanf("%f %f",&masa,&visina);
    visina=visina/100;
    bmi=masa/(visina*visina);
    printf("%.2f\n",bmi);
    return 0;
}
