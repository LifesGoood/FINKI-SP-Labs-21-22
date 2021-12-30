#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x=0,n,x1,h,x2,x3,x4,m,y;
    float f;
    scanf("%d",&n);
    m=n;
    h=n;
    for(i=0;x<2,i<5;i++){

       x=x+ (m % 10 == 5 ? 1 : 0);
       m=m/10;

    }
    if(x>=2){
        x1=n/1000;
        x2=n/100%10;
        x3=n/10%10;
        x4=n%10;

    if(x1 == 5){
        x1=6;
    }
    if(x2 == 5){
        x2=6;
    }
    if(x3 == 5){
        x3=6;
    }
    if(x4 == 5){
        x4=6;
    }
y=x4+(x3*10)+(x2*100)+(x1*1000);


 f=100.*(y-h)/h;
printf("%.4f%%",f);

    }
    else{
       printf("Error");
    }




    return 0;
}



/*

#include <stdio.h>

int main()
{
    int n, n2=0, inc=1, petki=0;
    scanf("%d", &n);

    int tempNum=n;
    for (int i=0; tempNum > 0; i++){
        petki += tempNum % 10 == 5 ? 1 : 0;
        n2 += (tempNum % 10 == 5 ? 6 : tempNum % 10) * inc;
        inc *= 10;
        tempNum /= 10;
    }
    if (petki >= 2){
        printf("%.4f%%", n > n2 ? 100.*(n-n2)/n : 100.*(n2-n)/n);
    }
    else{
        printf("Error");
    }

    return 0;
}

*/
