#include "laberinto.h"

struct Jugador {
	char nombre[20];
	int vidas;
};

int cont = 0;

int main() {
	struct Jugador jugador;
	jugador.vidas = 2;  // Inicializar las vidas del jugador
	if (cont == 0) {
		printf("Ingrese su nombre: ");
		scanf("%s", jugador.nombre);
	}
	printf("Bienvenido, %s. !Comencemos el juego!\n", jugador.nombre);
	printf("Instrucciones:\n");
	printf("  - Usa las teclas 'w', 'a', 's' y 'd' para moverte.\n");
	printf("  - Alcanza el objetivo '+' para ganar.\n");
	printf("  - Evita los obstaculos 'x'.\n");
	printf("  - Tienes un limite de tiempo.\n");
	mostrarMenu(jugador.nombre, jugador.vidas, cont);
	return 0;
}
