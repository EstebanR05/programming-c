#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, siguiente, t1, t2, n;
    printf("Introduce un número entero positivo: ");
    scanf("%d", &n);
    printf("Los primeros %d términos de la serie de Fibonacci son:\n", n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", t1);
        siguiente = t1 + t2;
        t1 = t2;
        t2 = siguiente;
    }
    return 0;
}