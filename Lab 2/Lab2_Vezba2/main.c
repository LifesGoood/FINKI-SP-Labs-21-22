#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    y = ++x && (z+5 || --y);
    printf("%d %d %d\n",x,y,z);
    z = z-- || (x>y) && (x>z);
    printf("%d %d %d\n",x,y,z);
    return 0;
}
