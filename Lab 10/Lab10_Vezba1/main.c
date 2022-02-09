#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile();
FILE* f=fopen("text.txt", "r");
char c;
    int counter=0;
    int counter1=0;
    int counter2=0;

 while((c=fgetc(f)) !=EOF){

        if(isalpha(c)){


    if(isalpha(c)){
       if(isupper(c)){
        counter++;
       }
    }
    if(isalpha(c)){
       if(islower(c)){
        counter1++;
       }
    }
    if(isalpha(c)){

        counter2++;

    }
    }
 }
    fclose(f);
   printf("%.4f\n",(float)counter/counter2);
    printf("%.4f\n",(float)counter1/counter2);


    return 0;

}
