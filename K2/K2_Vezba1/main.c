#include <stdio.h>
#include <ctype.h>
#include <string.h>

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
  FILE *f=fopen("text.txt","r");
  char c,str[10000];
  int i=0;
  int counter=0;
 while((c=fgetc(f)) !=EOF){
    str[i]=c;
    i++;
 }

  for(int i=0;i<strlen(str);i++){
        if(isupper(str[i])){
            str[i]=tolower(str[i]);
        }
         if(isupper(str[i+1])){
            str[i+1]=tolower(str[i+1]);
        }
    if((str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )&&(str[i+1]=='a' || str[i+1]=='e' || str[i+1]=='i' || str[i+1]=='o' || str[i+1]=='u')){
    printf("%c",str[i]);
    printf("%c\n",str[i+1]);
    counter++;
    }
  }
  printf("%d",counter);
  return 0;
}
