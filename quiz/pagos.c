#include <stdio.h>

int main()
{
    int t, dias, i, j, dt, ht, sd, total;
    int ss = 0;

    printf("Ingresa el numero de trabajadores?: ");
    scanf("%d", &t);

    for (i = 1; i <= t; i++)
    {
        printf("el trabajador %d cuantos dias trabajo?: ", i);
        scanf("%d", &dt);

        for (j = 1; j <= dt; j++)
        {
            printf("¿cuantas horas trabajo el dia %d?: \n ", j);
            scanf("%d", &ht);
            sd = ht * 1;
            ss = ss + sd;
            total += ss;
        }
        printf("el sueldo semanal del trabajador %d es de %d dolares \n ", i, ss);
    }

    printf("El total pagado por la empresa es: %d", total);

    return 0;
}
