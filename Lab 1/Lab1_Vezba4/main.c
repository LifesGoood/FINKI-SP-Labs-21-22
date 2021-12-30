#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,zbir=0;
    for(i=1;i<=5;i++){
    scanf("%d",&x);
    zbir=x+zbir;
    }
    printf("%.2f",(float)zbir/5);
    return 0;
}
