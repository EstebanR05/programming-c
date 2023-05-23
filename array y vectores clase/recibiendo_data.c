#include <stdio.h>

int main()
{
    int result2 = 0;
    int edades[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese los datos: ");
        scanf("%d", &edades[i]);
        printf("\n posicion de la edad %d \n", i);
        printf("\n %d \n", edades[i]);
        result2 += edades[i];
    }

    float promedio2 = 0.0;
    promedio2 = result2 / 10;

    printf("\n su promedio 2 es: %f \n", promedio2);
	return 0;
}
