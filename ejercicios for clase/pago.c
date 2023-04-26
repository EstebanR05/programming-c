#include <stdio.h>

int main()
{
    int p = 10;
    int t = 0;
    int index;

    printf("La persona debe pagar mensualmente de la siguiente forma: \n");

    for (index = 1; index <= 10; index++)
    {
        if (index < 1)
        {
            printf(" En el mes %d, de los cuales pagará $10 pesos \n", index);
        }
        else
        {
            printf(" En el mes %d, de los cuales pagará $%d pesos \n", index, p);
        }
        p = p + p;
        t += p;
    }

    printf("\nEn los 10 mese un total de $%d pesos", t);

    return 0;
}