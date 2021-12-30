#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,column,norows;
    scanf("%d",&norows);
    if(norows<3){
        printf("Nevaliden vlez");
    }else{
    for(row = 0;row < norows;row++){
        for(column = 0;column< norows;column++){
            if((row == column) || column==0 || row==norows-1    )
                    printf("*");
            else
                    printf(" ");

        }
        printf("\n");
    }
    }

    return 0;
}
