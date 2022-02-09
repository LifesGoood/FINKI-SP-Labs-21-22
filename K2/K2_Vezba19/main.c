#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
   int x,n;
   char arr[80];
   int arr1[80];
   scanf("%d %d\n",&n,&x);
   for(int i=0;i<n;i++){
    fgets(arr,sizeof(arr),stdin);
    arr[strlen(arr)-1]='\0';
for (int i=0; arr[i] != '\0'; i++){
        if (isupper(arr[i]))
        {
            printf("%c", (((arr[i]-'A') + x) % 26) + 65);
        }
        else if (islower(arr[i]))
        {
            printf("%c", (((arr[i]-'a') + x) % 26) + 97);
        }
}

    //printf("%s\n",arr);
   }


    return 0;
}
