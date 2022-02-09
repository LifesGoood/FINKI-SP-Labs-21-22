#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void writeToFile() {
    FILE *f = fopen("podatoci.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}
int main()
{
    writeToFile();

    char z[1],z1,z2,temp[10];
    int Start,End;
    scanf("%c",temp); // da clear-ne buff-ero
    scanf("%[^\n]",z);
     z1=z[0];
     z2=z[1];
FILE *f = fopen("podatoci.txt", "r");
 //  printf("%c\n",z1);
 //  printf("%c\n",z2);
   char str[80];
    while((fgets(str,80,f)) != NULL ){
        int len=strlen(str);

          for (int i=0; i<len; i++){
            if ((str[i])==z1){
            Start=i;
            break;
            }
          }
          for (int i=0; i<len; i++){
            if ((str[i])==z2){
            End=i;
            break;
            }
          }

          for(int i=Start+1;i<End;i++){
            printf("%c",str[i]);
          }
printf("\n");



    }




fclose(f);
    return 0;
}
