
#include <stdio.h>
#include <stdlib.h>
void rekurzija (long long int m, int b,int sum,int K)
{



  int c;
  if (m == 0)
    {
      printf (" : %d\n",sum);
    }
  else
    {
      c = m % 10;

      if (c > K){

	  printf ("%d", c);
	  sum=sum+c;
	  b++;

	  return rekurzija (m / 10, b,sum,K);

	}else
	return rekurzija (m / 10, b,sum,K);
    }
}

int main ()
{
  int r, b = 0,sum=0,K;
   long long int m;
    scanf("%d",&K);
    scanf("%d",&r);
 for(;r>0;r--){
  scanf("%lld",&m);
 long long int rev=0;
    while(m>0){

 rev=10*rev+m%10;
m=m/10;

}
//printf("rev %d",rev);
m=rev;
  rekurzija (m,b,sum,K);
 }
  return 0;
}

