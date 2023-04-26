#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Introduce un número entero positivo: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2)
    {
        printf("%d\n", i);
    }
    return 0;
}