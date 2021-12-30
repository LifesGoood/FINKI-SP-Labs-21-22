#include <stdio.h>
#include <stdlib.h>
void printArray(int array[100],int n);
int main()
{
   int n,i;
   int array[100];
   scanf("%d",&n);
   for(i=0;i<n;i++){
    scanf("%d",&array[i]);
   }

   printArray(array,n);


    return 0;
}


void printArray(int array[100],int n){

int i;

for(i=0;i<n;i++){
    printf("%d ",array[i]);
   }
   printf("\n");
for(i=1;i<=n;i++){
    printf("%d ",array[n-i]);
   }
      printf("\n");

for(i=1;i<=n;i++){
        if(i%2!=0){
    printf("%d ",array[n-i]);
   }
}
   printf("\n");
if(n%2!=0){
for(i=0;i<=n;i++){
        if(i%2==0){
    printf("%d ",array[i]);
   }
}
}else{
for(i=0;i<=n;i++){
        if(i%2!=0){
    printf("%d ",array[i]);
   }
}
}
}
