#include <stdio.h>

void main()
{
    char palabra[5] = "hola";

    for (int i = 0; i < 4; i++)
    {
        printf("\n su posicion es: %c = %d", palabra[i], i);
    }

}