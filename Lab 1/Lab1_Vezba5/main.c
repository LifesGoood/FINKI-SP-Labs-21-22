#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sec,sekundi,saati,minuti;
    scanf("%d",&sekundi);
    saati=sekundi/3600;
    minuti=(sekundi%3600)/60;
    sec=(sekundi%3600)%60;
    printf("%d sekundi se %d casovi, %d minuti i %d sekundi",sekundi,saati,minuti,sec);

    return 0;
}
