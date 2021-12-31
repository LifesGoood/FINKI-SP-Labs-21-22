#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y=0;
    char x;

    while(1){
    scanf("%c",&x);
    if(x=='A'){
        y=y+10;
    }
     if(x=='B'){
        y=y+11;
    }
     if(x=='C'){
        y=y+12;
    }
     if(x=='D'){
        y=y+13;
    }
     if(x=='E'){
        y=y+14;
    }
     if(x=='F'){
        y=y+15;
    }
     if(x=='a'){
        y=y+10;
    }
     if(x=='b'){
        y=y+11;
    }
     if(x=='c'){
        y=y+12;
    }
     if(x=='d'){
        y=y+13;
    }
     if(x=='e'){
        y=y+14;
    }
     if(x=='f'){
        y=y+15;
    }
    if(x>=48 && x<=57){
        y=y+(x-48);
    }
    if(x=='.'){
        break;
    }

    }
    if(y==16){
    printf("Poln pogodok");
    }else if(y%16==0){
    printf("Pogodok");
    }else{
    printf("%d",y);
    }
    return 0;
}
