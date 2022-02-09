#include <stdio.h>
#include <string.h>
#define MAX 100


void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    wtf();
    FILE *f = fopen("broevi.txt", "r");
    int str[100];
     int m=0;
     int n=0;
     int x;
     int tmp=0;
     int tmp1=0;
    while(fscanf(f,"%d",&x)) {
        if(x==0){
            break;
        }else{
    for(int i=0;i<x;i++){

       fscanf(f, "%d ", &str[i]);

     }
     for(int i=0;i<x;i++){
            n=str[i];
            while(n){
                m=(n%10);
                n=n/10;
            }
            if(m>tmp){
                tmp=m;
                tmp1=str[i];
            }
     }

  }
  printf("%d\n",tmp1);
   tmp=0;
   tmp1=0;
  }
    return 0;

}
