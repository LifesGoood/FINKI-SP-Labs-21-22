#include <stdio.h>
#include <stdlib.h>

int BrojPozitivni(int niza, int n){

if(n==1){
    return niza>0;
}

    return (niza>0)+BrojPozitivni(niza,n-1);

}




int main()
{
    int n,niza[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&niza[i]);
    }
    printf("%d",BrojPozitivni(niza,n));
    return 0;
}








/*
#include <stdio.h>
#include <stdlib.h>

int sumOfDigits(int n){
int broj=0;
while(n){
 broj=broj+n%10;
 n=n/10;
}
 return broj;
}


int main()
{
    int n, i;
    scanf("%d", &n);
    int sum = 0;
    for(i = 0; i < n; ++i){

        int current;
        scanf("%d", &current);
        sum += sumOfDigits(current);
        printf("%d\n", sumOfDigits(current));
    }
    printf("%d", sum);
    return 0;
}

*/








