#include "laberinto.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>


void mostrarMenu(char name, int vidas, int cont) {
	int opcion;
	

	printf("Elige la dificultad:\n");
	printf("1. Facil\n");
	printf("2. Medio\n");
	printf("3. Dificil\n");
	printf("4. Salir\n");
	
	scanf("%d", &opcion);
	
	switch (opcion) {
	case 1:
		jugarLaberintoFacil(name, vidas, cont);
		break;
	case 2:
		jugarLaberintoMedio(name, vidas, cont);
		break;
	case 3:
		jugarLaberintoDificil(name, vidas, cont);
		break;
	case 4:
		printf("Saliendo del juego...\n");
		break;
	default:
		printf("Opcion no valida. Saliendo del juego...\n");
		break;
	}
}

void jugarLaberintoFacil(char name, int vidas, int cont) {
	char a[10][20] = {
		"xxxxxxxxxxxxxxxxxx",
			"xo###### ####### x",
			"x     ##      ## x",
			"x####     ### ## x",
			"x   #####        x",
			"x # ############ x",
			"x #           ##+x",
			"xxxxxxxxxxxxxxxxxx",
	};
	
	int i, x, y, p, q;
	char ch;
	
	x = 1;   // Coordenada inicial del bal?n
	y = 1;
	p = 6;   // Coordenada objetivo para ganar
	q = 16;	
	time_t startTime, currentTime;
	int elapsedTime = 0;
	int timeLimit = 10;  // L?mite de tiempo en segundos
	
	startTime = time(NULL);  // Obtener el tiempo de inicio del juego
	
	for (i = 0; i < 10; i++) {
		printf("%s\n", a[i]);  // Imprimir el laberinto inicial
	}
	
	while (x != p || y != q) {
		currentTime = time(NULL);  // Obtener el tiempo actual del juego
		elapsedTime = difftime(currentTime, startTime);  // Calcular el tiempo transcurrido
		
		if (elapsedTime >= timeLimit) {
			printf("!Tiempo agotado! Has perdido.\n");
			vidas--;
			if (vidas >= 0) {
				mostrarMenu(name, vidas, cont);
			}
			else {
				return;
			}
		}
		
		ch = getch();  // Leer una tecla sin esperar por Enter
		
		if (ch == 's') {
			if (a[x + 1][y] != '#' && a[x + 1][y] != 'x') {
				a[x][y] = ' ';  // Limpiar la posici?n anterior del bal?n
				x++;
				a[x][y] = 'o';  // Actualizar la nueva posici?n del bal?n
			}
		}
		else if (ch == 'w') {
			if (a[x - 1][y] != '#' && a[x - 1][y] != 'x') {
				a[x][y] = ' ';
				x--;
				a[x][y] = 'o';
			}
		}
		else if (ch == 'a') {
			if (a[x][y - 1] != '#' && a[x][y-1] != 'x') {
				a[x][y] = ' ';
				y--;
				a[x][y] = 'o';
			}
		}
		else if (ch == 'd') {
			if (a[x][y + 1] != '#' && a[x][y+1] != 'x') {
				a[x][y] = ' ';
				y++;
				a[x][y] = 'o';
			}
		}
		else if (ch == 'q') {
			printf("Saliendo del juego...\n");
			return;
		}
		
		system("cls");  // Limpiar la pantalla antes de imprimir el nuevo estado del laberinto
		
		for (i = 0; i < 10; i++) {
			printf("%s\n", a[i]);  // Imprimir el nuevo estado del laberinto
		}
		printf("Tiempo restante: %d segundos\n", timeLimit - elapsedTime);
		printf("Vidas restantes: %d\n", vidas);
	}
	
	printf("!Felicidades, has llegado al objetivo!\n");
	cont++;
	mostrarMenu(name, vidas, cont);
}


void jugarLaberintoMedio(char name, int vidas, int cont) {
	char a[20][50] = {
		"xxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
			"xo        #   ### ## ### ###x",
			"x ##### # # #  ##   ## ### #x",
			"x #   # #  ### ### # # #    x",
			"x   # #### # # # ###    # ##x",
			"x#### #  # # #  ## ## ###   x",
			"x   # # #  #  #    ##   ## #x",
			"x # # ## # # # ## #####  # #x",
			"x # # # ## #  # #   #    ## x",
			"x #   ##        ### ###  # #x",
			"x #####  # ##  ##   ##      x",
			"x       ## ##             # x",
			"x ######## # # # ###  #   # x",
			"x     #  # #     #   ## # # x",
			"x#### #  # # # # ###  # # # x",
			"x     #  # # #   ##  ## # # x",
			"x # #        ### ## # # #  #x",
			"x #   ###  ##       #    # +x",
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
	};
	
	int i, x, y, p, q;
	char ch;
	
	x = 1;   // Coordenada inicial del bal?n
	y = 1;
	p = 17;   // Coordenada objetivo para ganar
	q = 27;
	time_t startTime, currentTime;
	int elapsedTime = 0;
	int timeLimit = 40;  // L?mite de tiempo en segundos
	
	startTime = time(NULL);  // Obtener el tiempo de inicio del juego
	
	for (i = 0; i < 20; i++) {
		printf("%s\n", a[i]);  // Imprimir el laberinto inicial
	}
	
	while (x != p || y != q) {
		currentTime = time(NULL);  // Obtener el tiempo actual del juego
		elapsedTime = difftime(currentTime, startTime);  // Calcular el tiempo transcurrido
		
		if (elapsedTime >= timeLimit) {
			printf("!Tiempo agotado! Has perdido.\n");
			vidas--;
			if (vidas >= 0) {
				mostrarMenu(name, vidas, cont);
			}
			else {
				return;
			}
		}
		ch = getch();  // Leer una tecla sin esperar por Enter
		
		if (ch == 's') {
			if (a[x + 1][y] != '#' && a[x + 1][y] != 'x') {
				a[x][y] = ' ';  // Limpiar la posici?n anterior del bal?n
				x++;
				a[x][y] = 'o';  // Actualizar la nueva posici?n del bal?n
			}
		}
		else if (ch == 'w') {
			if (a[x - 1][y] != '#' && a[x-1][y] != 'x') {
				a[x][y] = ' ';
				x--;
				a[x][y] = 'o';
			}
		}
		else if (ch == 'a') {
			if (a[x][y - 1] != '#' && a[x][y - 1] != 'x') {
				a[x][y] = ' ';
				y--;
				a[x][y] = 'o';
			}
		}
		else if (ch == 'd') {
			if (a[x][y + 1] != '#' && a[x][y + 1] != 'x') {
				a[x][y] = ' ';
				y++;
				a[x][y] = 'o';
			}
		}
		else if (ch == 'q') {
			printf("Saliendo del juego...\n");
			return;
		}
		
		system("cls");  // Limpiar la pantalla antes de imprimir el nuevo estado del laberinto
		
		for (i = 0; i < 20; i++) {
			printf("%s\n", a[i]);  // Imprimir el nuevo estado del laberinto
		}
		printf("Tiempo restante: %d segundos\n", timeLimit - elapsedTime);
		printf("Vidas restantes: %d\n", vidas);
	}
	
	printf("!Felicidades, has llegado al objetivo!\n");
	cont++;
	mostrarMenu(name, vidas, cont);
}


void jugarLaberintoDificil(char name, int vidas, int cont) {
	char a[35][60] = {
		"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
			"xo        #   ### ## ### ### #   ## # ########   #  # # #x",
			"x ############################################# #        x",
			"x ###      ######################               ####### #x",
			"x     #### ###################### ############ ######## #x",
			"x######### #                       ########### ######## #x",
			"x######### # ##########################     ##    ##### #x",
			"x##        # ##     ######### #    #    ### ##### ##### #x",
			"x##### ##### ## ###             #    ######    ## ##### #x",
			"x##### ##    #  ############################## ##    ## #x",
			"x##### ## ##### #                          ### ##### ## #x",
			"x##### ##    ## # ######################## ###    ## ## #x",
			"x##### ##### ## # ##     ####     ######## ###### ## ## #x",
			"x##### ##### ## # ## ###  ### ### ######## ###### ## ## #x",
			"x##### ##### ## # ## #### ### ###       ## ######    ## #x",
			"x##### ##### ## # ## #### ### ######### ## ############ #x",
			"x#####       ## #    #### ##      ##### ## ###     #### #x",
			"x##### ######## ######### ### ### ##### ## ### ### #### #x",
			"x##### ########         # ### ### ##### ## ### ### #### #x",
			"x##### ################ # ### ### ##### ##     ###      #x",
			"x##### ################ # ### ### ##### ##############  #x",
			"x##### ################ # ### ### #####           ####  #x",
			"x##### ################ # ### ### ############### ###  ##x",
			"x##### #########        # ### ##       ##########     # #x",
			"x##### ######### ######## ### ## ##### ################ #x",
			"x#####                    ### ## ##### ####          ## #x",
			"x##### ################## ### ## ##### #### ######## ## #x",
			"x#####            ####### ### ## ##### #### ###      ## #x",
			"x################ ####### ### ######## #### ### ####### #x",
			"x################ ####### ### ######## #### ### ###     #x",
			"x################ ####### ### ######## #### ### ### ### #x",
			"x################         ### #####           #     ###+#x", 
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
	};
	
	int i, x, y, p, q;
	char ch;
	
	x = 1;   // Coordenada inicial del bal?n
	y = 1;
	p = 31;   // Coordenada objetivo para ganar
	q = 55;
	time_t startTime, currentTime;
	int elapsedTime = 0;
	int timeLimit = 120;  // L?mite de tiempo en segundos
	
	startTime = time(NULL);  // Obtener el tiempo de inicio del juego
	
	for (i = 0; i < 35; i++) {
		printf("%s\n", a[i]);  // Imprimir el laberinto inicial
	}
	
	while (x != p || y != q) {
		currentTime = time(NULL);  // Obtener el tiempo actual del juego
		elapsedTime = difftime(currentTime, startTime);  // Calcular el tiempo transcurrido
		
		if (elapsedTime >= timeLimit) {
			printf("!Tiempo agotado! Has perdido.\n");
			vidas--;
			if (vidas >= 0) {
				mostrarMenu(name, vidas, cont);
			}
			else {
				return;
			}
		}
		ch = getch();  // Leer una tecla sin esperar por Enter
		
		if (ch == 's') {
			if (a[x + 1][y] != '#' && a[x + 1][y] != 'x') {
				a[x][y] = ' ';  // Limpiar la posici?n anterior del bal?n
				x++;
				a[x][y] = 'o';  // Actualizar la nueva posici?n del bal?n
			}
		}
		else if (ch == 'w') {
			if (a[x - 1][y] != '#' && a[x-1][y] != 'x') {
				a[x][y] = ' ';
				x--;
				a[x][y] = 'o';
			}
		}
		else if (ch == 'a') {
			if (a[x][y - 1] != '#' && a[x][y - 1] != 'x') {
				a[x][y] = ' ';
				y--;
				a[x][y] = 'o';
			}
		}
		else if (ch == 'd') {
			if (a[x][y + 1] != '#' && a[x][y + 1] != 'x') {
				a[x][y] = ' ';
				y++;
				a[x][y] = 'o';
			}
		}
		else if (ch == 'q') {
			printf("Saliendo del juego...\n");
			return;
		}
		
		system("cls");  // Limpiar la pantalla antes de imprimir el nuevo estado del laberinto
		
		for (i = 0; i < 35; i++) {
			printf("%s\n", a[i]);  // Imprimir el nuevo estado del laberinto
		}
		printf("Tiempo restante: %d segundos\n", timeLimit - elapsedTime);
		printf("Vidas restantes: %d\n", vidas);
	}
	
	printf("!Felicidades, has llegado al objetivo!\n");
	mostrarMenu(name, vidas, cont);
	cont++;
}
