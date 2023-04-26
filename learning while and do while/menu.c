#include <stdio.h>

int main()
{
	int num;
	int op;

	printf("Digite un n�mero: ");
	scanf("%d", &num);

	do
	{
		printf("\n*******Menu*******\n");
		printf("[1] - opcion 1 \n");
		printf("[2] - opcion 2 \n");
		printf("[3] - Salir \n");

		printf("Digite una opci�n: ");
		scanf("%d", &op);

		switch (op)
		{
		case 1:
			printf("[1] - opcion 1 \n");

			break;
		case 2:
			printf("[2] - opcion 2 \n");

			break;
		}
	} while (op != 3);
	return 0;
}
