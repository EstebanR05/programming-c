#include <stdio.h>

int main()
{
    int n;
    int i;
    int es_primo = 1;

    printf("Introduce un número entero positivo: ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            es_primo = 0;
            break;
        }
    }
    if (es_primo)
    {
        printf("%d es primo.\n", n);
    }
    else
    {
        printf("%d no es primo.\n", n);
    }
    
    return 0;
}