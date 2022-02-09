#include <stdio.h>
#include <string.h>

// ne menuvaj ovde
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}


//  100
//  ab12 1 1.2
//  c234 2 2.0
//  #

int main() {
    wf();
     FILE *f = fopen("livce.txt", "r");
     int uplata,tip,tip1;
     char sifra[5],c;
     char sifra1[5],test;
     float koeficient,koef=1.0;
     float koeficient1,tmp=0.0;
	   fscanf(f, "%d" ,&uplata);
       printf("%d\n",uplata);
       while(fscanf(f, "%s", sifra) > 0){
            fscanf(f, "%d %f",&tip,&koeficient);
            printf("%s ",sifra);
            printf("%d ",tip);
            printf("%.2f\n",koeficient);
            koef=koef*koeficient;
if(koeficient>tmp){
    tmp=koeficient;
    strcpy(sifra1, sifra);
    tip1=tip;
    koeficient1=koeficient;

}

        }
       printf("%s %d %.2f\n",sifra1,tip1,koeficient1);
       printf("%.2f ",koef*uplata);
         fclose(f);
	return 0;

}
