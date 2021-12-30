

///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void readMatrix(int a[100][100],int n,int m);

int main() {
  int a[100][100],n,m;
  scanf("%d",&n);
  scanf("%d",&m);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      scanf("%d", &a[i][j]);
    }

  }


  readMatrix(a,n,m);

  return 0;
}

void readMatrix(int a[100][100],int n,int m) {
    int sum=0,min=0,history=0,smallest=1000;;
  for (int i = 0; i < m; i++) {

//history=sum;

        sum=0;
    for (int j = 0; j < n; j++) {

        sum=sum+a[j][i];

    }

if(smallest>sum){
    smallest=sum;
    min=i;
}
   // printf("sum %d\n",sum);
 //   printf("hist %d\n",history);


  }
  printf("%d\n",min);




}
