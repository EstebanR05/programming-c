#include <stdio.h>

int main()
{
    int n, dias_trabajados, horas_trabajadas;
    float sueldo_semanal, total_pagado = 0;

    printf("Ingrese el número de trabajadores: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        horas_trabajadas = 0;
        printf("Ingrese el número de días que trabajó el empleado %d: ", i);
        scanf("%d", &dias_trabajados);
        for (int j = 1; j <= dias_trabajados; j++)
        {
            int horas;
            printf("Ingrese las horas trabajadas por el empleado %d en el día %d: ", i, j);
            scanf("%d", &horas);
            horas_trabajadas += horas;
        }
        sueldo_semanal = horas_trabajadas * 10; // Tarifa por hora de $10
        total_pagado += sueldo_semanal;
        printf("El sueldo semanal del empleado %d es de $%.2f\n", i, sueldo_semanal);
    }

    printf("La empresa pagó un total de $%.2f por los %d empleados.", total_pagado, n);

    return 0;
}
