#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int n = 2;
    int raiz = sqrt(n);
    int raizOuNao = 0;
    for (int i = 2; i <= raiz; i++)
    {
        if (n % i == 0)
        {                  
            raizOuNao = 1; 
            break;         
        }
    }

    if (raizOuNao == 0)
    {
        printf("false");
    }
    else
    {
        printf("true");
    }

}
