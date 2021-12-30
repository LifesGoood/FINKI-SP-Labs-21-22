
#include <stdio.h>
#include <stdlib.h>
void rekurzija (long long int m, int b,int sum)
{



  int c;
  if (m == 0)
    {
      printf ("%d\n",sum);
    }
  else
    {
      c = m % 10;


     m=m/10;

	  sum=sum+c;


	  return rekurzija (m/10, b,sum);



    }
}

int main ()
{
  int b = 0,sum=0;
   long long int m;



  scanf("%lld",&m);



 long long int rev=0;
 /*
    while(m>0){

 rev=10*rev+m%10;
m=m/10;

}
//printf("rev %d",rev);
m=rev;
*/
 m=m/10;
  rekurzija (m,b,sum);

  return 0;
}

