#include <stdio.h>
#include <stdlib.h>
void rekurzija(int m, int b)
{
 int c;
 if(m==0)
 {
printf("ima %d cifri",b);
 }
 else
 {
 c=m%10;
 if(c<5)
 {
 printf("%d",c);
 b++;
 return rekurzija (m/10,b);
 }
 else
 return rekurzija (m/10,b);
}
}
int main()
{
 int m,i,b=0;
 printf("vnesi go",&m);
 scanf("%d",&m);
 rekurzija(m,b);
 return 0;
}
