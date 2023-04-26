#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, f = 1;
    printf("Ingresa un numero para sacar su factorial: ");
    scanf("%d", &n);
    printf("%d! = ", n);
    
    for (i = 1; i <= n; i++)
    {
        if (i < n)
        {
            printf("%d x ", i);
        }
        else
        {
            printf("%d", n);
        }
        f *= i;
    }
    printf(" = %d\n", f);

    return 0;
}