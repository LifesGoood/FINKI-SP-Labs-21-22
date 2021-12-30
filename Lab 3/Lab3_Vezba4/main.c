#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mbroj,den,mesec,godina,username,username1,i=0;
    scanf("%d",&mbroj);
    // 11 03 998
    den=mbroj/100000;
    mesec=mbroj%100000/1000;
    godina=mbroj%1000;
    godina=godina+1000;
    username=den * 100 + mesec * 1000 + godina;
    username1=username;
    while(username1 != 0)
    {
        username1/=10;
        i++;
        printf("i=%d\n",i);
    }
    if(i==5){
        printf("%d",username);
    }
    else{


        if(godina<1961)
        {
            printf("7%d",username);
        }
        if(godina>=1961 && godina<=1980)
        {
            printf("8%d",username);
        }
        if(godina>=1981 && godina<2000)
        {
            printf("9%d",username);
        }
    }


    return 0;
}
