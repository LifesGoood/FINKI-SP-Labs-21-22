#include<stdio.h>
int main(){
    int n,sum=0,max=0,num;
    scanf("%d", &n);
    for(int i=n-1;i>0;i--){
        for(int j=i;j>0;j--){
            if(i%j==0)
            sum=sum+j;
        }
        if(sum>max){
            max=sum;
            num=i;
        }
        sum=0;
    }
    printf("%d",num);
}
