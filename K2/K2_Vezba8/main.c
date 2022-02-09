#include <stdio.h>
#include <string.h>
#include <ctype.h>
// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
	FILE *f = fopen("dat.txt", "r");
    char str[100],ST[100];
    int digitS,digitE,len,tmp=0,digitSum;
    while((fgets(str, 100, f)) != NULL){
        len=strlen(str);
//printf("%d",len);
if(len>=tmp){
        tmp=len;
         for (int i=0; i<len; i++){
        if (isdigit(str[i])){
            digitSum++;

        }
    }
    if(digitSum<3){
    break;
    }
    digitSum=0;
        for (int i=0; i<len; i++){
        if (isdigit(str[i])){
            digitS=i;
            break;
        }
    }
   // printf("%d",digitS);
       for (int i=len; i>0; i--){
        if (isdigit(str[i])){
            digitE=i;
            break;
        }
    }
  for(int i=digitS;i<=digitE;i++){
      //  printf("%c",str[i]);
        ST[i]=str[i];
    }
// printf("\n");
 //printf("\n");
  //  printf("%d",digitE);
}




}
for(int i=digitS;i<=digitE;i++){
        printf("%c",ST[i]);
       // ST[i]=str[i];
    }
return 0;
}
