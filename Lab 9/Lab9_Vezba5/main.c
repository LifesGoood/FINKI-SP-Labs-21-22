#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int occ[2];

int letterFrequency (char *text, char letter){
    int letter2;
if(islower(letter)){
letter2 = toupper(letter);
}else{
letter2 = tolower(letter);
}
 int counter=0;
 int counter2=0;
 int counter3=0;
 for(int i=0;i<strlen(text);i++){
    if(text[i]==letter){
        counter++;
    }
    if(text[i]==letter2){
        counter2++;
    }
    if(isalpha(text[i]) || ispunct(text[i]) || isspace(text[i])){
        counter3++;
    }
 }

occ[0]=counter;
occ[1]=counter2;
occ[2]=counter3;


}



int main()
{

    char text[1000],letter;
    fgets(text,sizeof(text),stdin);
    scanf("%c",&letter);
    letterFrequency(text,letter);
     int letter2;
if(islower(letter)){
letter2 = toupper(letter);
}else{
letter2 = tolower(letter);
}

if(islower(letter)){
 printf("%c -> %.3f%%\n",letter,(float)occ[0]/occ[2]*100);
 printf("%c -> %.3f%%\n",letter2,(float)occ[1]/occ[2]*100);
 }else{
 printf("%c -> %.3f%%\n",letter2,(float)occ[1]/occ[2]*100);
 printf("%c -> %.3f%%\n",letter,(float)occ[0]/occ[2]*100);
 }
    return 0;
  }


