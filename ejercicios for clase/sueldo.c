#include <stdio.h>

int main()
{
    int h, i, c2, p, horas;
    int t = 0;

    printf("El pago por hora es de $4200 pesos\n");

    for (i = 1; i <= 1; i++)
    {
        h = 0;

        for (c2 = 1; c2 <= 6; c2++)
        {

            printf("¿El dia %d cuantas horas trabajo:? ", c2);
            scanf("%d", &horas);
            h += horas;
        }
        
        p = h * 4200;
        t += p;
    }

    printf("El empleado trabajo un total de %d horas. \n", h);
    printf("El sueldo es $%d pesos.", t);
    
    return 0;
}