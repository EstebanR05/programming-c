#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, factorial = 1;
    printf("Introduce un número entero positivo: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("El factorial de %d es: %d\n", n, factorial);

    return 0;
}