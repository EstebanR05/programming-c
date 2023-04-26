#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int suma = 0;
    
    for (i = 1; i <= 10; i++)
    {
        suma += i;
    }
    printf("La suma de los primeros 10 números naturales es: %d\n", suma);
    return 0;
}