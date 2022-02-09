#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


 char *revertString(char *a, char *b, char *comparator){
    for(int i = 0; comparator[i]; i++){
      comparator[i] = tolower(comparator[i]);
    }

    char str1[20] = "pogolem";
    char str2[20] = "pomal";


    char strRevA[100];
    char strRevB[100];

    int lenA=strlen(a);
    int lenB=strlen(b);

    for(int i=0;i<lenA;i++){
        strRevA[i]=a[lenA-i-1];
    }
     for(int i=0;i<=lenB;i++){
        strRevB[i]=b[lenB-i-1];
    }

    strRevA[lenA] = '\0';
    strRevB[lenB] = '\0';

    a = strRevA, b=strRevB;

    if(strstr(comparator,str1) || strstr(comparator,str2) ){
        if (strcmp(comparator, "pogolem")){
            if (!strcmp(a, b) > 0){
                return a;
            }
            else{
               return b;
            }
        }
        else if (strcmp(comparator, "pomal")) {
            if (!strcmp(a, b) > 0){
              return b;
            }
            else{
              return a;
            }
        }
    }
    else{
            return "Invalid comparator";
        }
    return "Invalid comparator";
}


int main()
{
    int f;
    scanf("%d\n",&f);

    for(;f>0;f--){
        char a[100],b[100],comparator[100];
        fgets(a,sizeof(a),stdin);
        fgets(b,sizeof(b),stdin);
        fgets(comparator,sizeof(comparator),stdin);

        a[strlen(a)-1]='\0';
        b[strlen(b)-1]='\0';


        printf("%s",revertString(a,b,comparator));
    }
    return 0;
  }
