#include <stdio.h>

int main()
{
	int num;
	int sum = 0;
	float med;
	int contador = 0;

	printf("introduzca un numero, (cero es para salir): ");
	scanf("%i", &num);

	while (num != 0)
	{
		sum = sum + num;
		contador++;
		printf("introduzca un numero, (cero es para salir): ");
		scanf("%i", &num);
	}

	if (contador > 0)
	{
		med = sum / contador;
	}
	else
	{
		med = 0;
	}

	printf("su suma es: %i \n", sum);
	printf("su media es: %.2f \n", med);

	return 0;
}
