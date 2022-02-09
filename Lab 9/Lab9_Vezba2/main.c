#include<stdio.h>




double max (float * niza, int n){
double tmp=0;
    for(int i=0;i<=n;i++){
        if(*(niza+i)>tmp){
            tmp=*(niza+i);
//printf("%.3f\n",tmp);
        }
    }
return tmp;
}


double min (float * niza, int n){
double tmp=111111;
    for(int i=0;i<n;i++){
        if(*(niza+i)<tmp){
            tmp=*(niza+i);
//printf("%.3f\n",tmp);
        }
    }
return tmp;
}

void normalize (float * niza, int n){
double minimum = min(niza,n), maximum = max(niza,n);
for (int i=0; i<n; i++){
    *(niza+i) = (*(niza+i)-minimum) / (maximum - minimum);
    }
}
void sort (float * niza, int n){
    float temp;
 for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
           if(*(niza+i) < *(niza+j)) {
               temp = *(niza+i);
               *(niza+i) = *(niza+j);
               *(niza+j) = temp;
           }
        }
    }
}

int main () {

    float niza [2000];
    int i,n;

    scanf("%d", &n);

    for (i=0;i<n;i++) {
        scanf("%f", &niza[i]);

    }

    printf("MAX -> %.3f\n", max(niza,n));
 printf("MIN -> %.3f\n", min(niza,n));

    normalize(niza,n);
    sort(niza,n);

     for (i=0;i<n;i++) {
        printf("%.3f ", niza[i]);

    }

    return 0;

}




















/*
void normalize (double * niza, int n){
x = (x-min(niza)) / (max(niza) - min(niza))

}




void sort (double * niza, int n)

*/

