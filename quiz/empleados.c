#include <stdio.h>

int main()
{
    int num_trab, dias_trab, horas_trab;
    float suel_sem, total = 0;

    printf("Ingrese el número de trabajadores: ");
    scanf("%d", &num_trab);

    for (int i = 1; i <= num_trab; i++)
    {
        horas_trab = 0;
        printf("Ingrese el número de días que trabajó el Trabajador %d: ", i);
        scanf("%d", &dias_trab);
        for (int j = 1; j <= dias_trab; j++)
        {
            int horas;
            printf("Ingrese las horas trabajadas por el Trabajador %d en el día %d: ", i, j);
            scanf("%d", &horas);
            horas_trab += horas;
        }
        suel_sem = horas_trab * 10;
        total += suel_sem;
        printf("El sueldo semanal del Trabajador %d es de $%.2f\n", i, suel_sem);
    }

    printf("La empresa pagó un total de $%.2f por los %d Trabajadores.", total, num_trab);

    return 0;
}
