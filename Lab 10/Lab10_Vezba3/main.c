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
    FILE *f =fopen("text.txt","r");
     char c;
     int counter1=0;
     int counter2=0;
     int counter3=0;
     int len=0;
     char longest[1000],str[1000];
     while((c=fgetc(f)) !=EOF){



        if(isspace(c)){
            counter1++;
            counter3++;
        }
         if(c=='\n'){
            printf("%d\n",counter1);
            counter1=0;
            counter2++;
        }

     }
 printf("%.2f\n",(float)counter3/counter2);

  fclose(f);
 fopen("text.txt","r");

   while(fgets(str,sizeof(str),f)!=NULL){
     if(len<strlen(str)){
         strcpy(longest,str);
         len=strlen(str);
     }
  }


  for(int i=0;i<strlen(longest);i++){
    if(isupper(longest[i])){
        longest[i]=tolower(longest[i]);
    }else{
        longest[i]=toupper(longest[i]);
    }
  }


  printf("%s",longest);
  return 0;



    }

