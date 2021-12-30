#include <stdio.h>
#include <stdlib.h>
int obratenBroj (int broj);

int sumaNaCifri (int broj);

void pecatiVoInterval (int a, int b);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

  //  obratenBroj (a);

  //  sumaNaCifri (a);


//printf("%d\n",obratenBroj(a));
//printf("%d\n",sumaNaCifri(a));
pecatiVoInterval (a,b);
//printf("%d",pecatiVoInterval(a,b));


    return 0;
}
int obratenBroj (int broj){
int ostatok,obraten=0;

while(broj!=0){
ostatok=broj%10;
obraten=obraten*10+ostatok;
broj=broj/10;
}

return obraten;
}

int sumaNaCifri (int broj){
int ostatok,suma=0;
while(broj!=0){
ostatok=broj%10;
suma=suma+ostatok;
broj=broj/10;
}
return suma;
}

void pecatiVoInterval (int a, int b){

for(;a<=b;a++){

    if((a+obratenBroj(a))%sumaNaCifri((a+obratenBroj(a)))==0){
   //     printf("%d\n",a+obratenBroj(a));
    //    printf("%d\n",a+sumaNaCifri(a));
        printf("%d\n",a);
    }



}


}
