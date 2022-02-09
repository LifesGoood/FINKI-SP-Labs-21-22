#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void writeToFile() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

void printFile() {

    FILE *f=fopen("output.txt","r");
    char line[100];
    while(!feof(f)){
        fgets(line,100,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}


int main() {
    writeToFile();
 FILE *f = fopen("input.txt", "r");
 FILE *f1 = fopen("output.txt", "w");
   int x,i,j,sum=0;
   int matrix[100][100];
   fscanf(f,"%d",&x);
   for(i=0;i<x;i++){
   for(j=0;j<x;j++){
        fscanf(f,"%d ",&matrix[i][j]);
   }
   }

    for(i=0;i<x;i++){
   for(j=0;j<x;j++){
       if(i==j){
           sum=sum+matrix[i][j];
       }
   }
   }

 for(i=0;i<x;i++){
   for(j=0;j<x;j++){
       if(j>i){
            if(sum>9){
        fprintf(f1,"0%d ",sum);
            }else{
             fprintf(f1,"00%d ",sum);
            }
   }else{
        fprintf(f1,"    ");
   }
   }
   fprintf(f1,"\n");
   }

fclose(f);
fclose(f1);
   printFile();
    return 0;
}
