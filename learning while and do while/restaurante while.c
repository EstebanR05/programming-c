#include <stdio.h>

int main()
{
	int select;
	int cont = 0;
	
	printf("\n*******Menu*******\n");
	printf("[1] - Perro caliente \n");
	printf("[2] - hamburguesas \n");
	printf("[3] - sandwich \n");
	printf("[4] - Salir \n");
	scanf("%d", &select);
	
	while (select != 4)
	{
		switch (select)
		{
		case 1:
			printf("su seleccion fue Perro caliente");
			break;
		case 2:
			printf("su seleccion fue hamburguesas");
			break;
		case 3:
			printf("su seleccion fue sandwich");
			break;
		}
		
		printf("\n*******Menu*******\n");
		printf("[1] - Perro caliente \n");
		printf("[2] - hamburguesas \n");
		printf("[3] - sanndwich \n");
		printf("[4] - Salir \n");
		scanf("%d", &select);
		
		cont++;
	}
	
	return 0;
}
