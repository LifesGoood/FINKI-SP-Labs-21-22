#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,count1=0,count=0;
    scanf("%d",&z);
    scanf("%d %d",&x,&y);
    while(x!=0 || y!=0){

    if(x+y==z){
        count++;
    }
 if(x+y!=z){
        count1++;
    }

    scanf("%d %d",&x,&y);
    }
    printf("Vnesovte %d parovi od broevi chij zbir e %d\n",count,z);
    printf("Procentot na parovi so zbir %d e %.2f%%",z,(100.00/(count1+count))*count);
    return 0;
}
