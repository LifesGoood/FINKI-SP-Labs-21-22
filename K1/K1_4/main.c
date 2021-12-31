#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch,sum=0;

    printf("Enter a Character\n");
    scanf("%c", &ch);
while(ch!='!'){
        scanf("%d", &ch);
    if(ch >= 65 && ch <= 90)
    {
        printf("%d is an Uppercase Alphabet", ch);
    }
    else if(ch >= 97 && ch <= 122)
    {
        printf("%d is an lowercase Alphabet", ch);
    }
    else if(ch >= 48 && ch <= 57)
    {

        sum=sum+ch;
        printf("Sum is %d", ch);
    }
    else if( (ch >= 0  && ch <= 47) ||
             (ch >= 58 && ch <= 64) ||
             (ch >= 91 && ch <= 96) ||
             (ch >= 123 && ch <= 127))
    {
        printf("%d is a Special Character", ch);
    }
}
    return 0;
}
