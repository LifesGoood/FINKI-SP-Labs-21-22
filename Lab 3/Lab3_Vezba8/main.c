#include <stdio.h>
#include <stdlib.h>

int main()
{
    int den,mesec,godina;
    scanf("%d %d %d",&den,&mesec,&godina);


    if((den>=1 && den<=31) && (mesec==1 || mesec==3 || mesec==5 || mesec==7 || mesec==8 || mesec==10 || mesec==12))
                printf("DA");
            else if((den>=1 && den<=30) && (mesec==4 || mesec==6 || mesec==9 || mesec==11))
                printf("DA");
            else if((den>=1 && den<=28) && (mesec==2))
                printf("DA");
            else if(den==29 && mesec==2 && (godina%400==0 ||(godina%4==0 && godina%100!=0)))
                printf("DA");
                else{
                    printf("NE");
                }

    return 0;
}
