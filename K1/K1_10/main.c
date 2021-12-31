#include <stdio.h>

int main(){

    int broj, temp, pogolem = 0, pomal = 0;
    while(scanf("%d", &broj))
    {
        if(broj >= 10)
        {
            temp = broj;
            if(temp%10 == temp/10%10)
                continue;
            else if(temp%10 > temp/10%10)
            {
                pogolem = 1;
                pomal = 0;
            }
            else
            {
                pogolem = 0;
                pomal = 1;
            }
            temp /= 10;
            while(temp>=10)
            {
                if(pogolem)
                {
                    if(temp%10 == temp/10%10)
                        break;
                    else if(temp%10 < temp/10%10)
                    {
                        pogolem = 0;
                        pomal = 1;
                    }
                    else
                        break;
                }
                else if(pomal)
                {
                    if(temp%10 == temp/10%10)
                        break;
                    else if(temp%10 > temp/10%10)
                    {
                        pogolem = 1;
                        pomal = 0;
                    }
                    else
                        break;
                }
                temp /= 10;
            }
            if(temp<=10)
                printf("%d\n", broj);
        }
    }
    return 0;
}
