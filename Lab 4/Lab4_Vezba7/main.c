#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,column,norows;
    scanf("%d",&norows);
    for(row = 0;row < norows;row++){
        for(column = 0;column< norows;column++){
            if(((row+column) == norows-1) || ((column) == 0) || ((column) == norows-1) || (row == 0) || (row == norows-1))
                    printf("*");
            else
                    printf(" ");

        }
        printf("\n");
    }


    return 0;
}
1
