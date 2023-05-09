#include <stdio.h>

void main()
{
    int result=0;
    int edad[10] = {19, 20, 23, 24, 44, 40, 19, 18, 25, 29, 22};
    
    for (int i = 0; i < 10; i++)
    {
        printf("\n posicion de la edad %d \n", i);
        printf("\n %d \n", edad[i]);
        result += edad[i];
    }

    float promedio = 0.0;
    promedio=result / 10;

    printf("\n su promedio es: %f \n", promedio);
}