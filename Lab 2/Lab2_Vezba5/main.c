#include <stdio.h>
#include <stdlib.h>

int main()
{
    double prosek;
    int indeks,o1,o2,o3,o4,o5,o6,godina,godinaT;
    scanf("%d",&indeks);
    scanf("%d %d %d %d %d %d",&o1,&o2,&o3,&o4,&o5,&o6);
    prosek=(float)(o1+o2+o3+o4+o5+o6)/6;
    godinaT=indeks/10000;
    if(godinaT == 14)
    {
        godina=6;
    }else if(godinaT == 15)
    {
        godina=5;
    }else if(godinaT == 16)
    {
        godina=4;
    }else if(godinaT == 17)
    {
        godina=3;
    }else if(godinaT == 18)
    {
        godina=2;
    }else if(godinaT == 19)
    {
        godina=1;
    }
    printf("Prosek: %.3f\n",prosek);
    printf("Student: %d\n",indeks);
    printf("%d godina\n",godina);
    printf("Nagraden: %d\n",(prosek>=9.5)? 1:0);
    return 0;
}
