#include <stdio.h>
#include <ctype.h>
#include <string.h>
void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    FILE *f = fopen("input.txt", "r");
    char str[100],digits[100];
    int counter=0,len,m=0,tmp;
    while((fgets(str,100,f)!= NULL)){
        len=strlen(str);
        for(int i=0;i<len;i++){
            if(isdigit(str[i])){
                counter++;
                digits[m]=str[i];
                m++;
            }
        }
       printf("%d:",counter);


       for (int i = 0; i < m; ++i){
   for (int j = i + 1; j < m; ++j){
      if (digits[i] > digits[j]){
         tmp = digits[i];
         digits[i] = digits[j];
         digits[j] = tmp;
      }
   }
}


       for(int i=0;i<m;i++){
        printf("%c",digits[i]);
       }
       m=0;
        counter=0;
         printf("\n");

    }
fclose(f);
    return 0;
}
