

#include <stdio.h>

int main(){

int n,n1,tmp,digit,digit1,flag;
scanf("%d %d",&n,&n1);


if(n1>n){
    tmp=n;
    n=n1;
    n1=tmp;
}



if(n<=0 || n1<=0 ){
    printf("Invalid input");
    return 0;
}


for(;n1>0,n>0;){
    n=n/10;
    digit=n%10;
    digit1=n1%10;
    n=n/10;
    n1=n1/10;
    flag=0;

    if(digit1==digit){
        printf("%d == %d\n",digit,digit1);
        flag=1;
    }else{
    flag=0;
    break;
    }


}
if(flag==1){
printf("PAREN");
}else{
printf("NE");
}

return 0;
}
