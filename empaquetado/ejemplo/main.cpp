#include <stdio.h>
#include "Persona.h" 

int main (int argc, char *argv[]) {
	printf("Creando persona \n");
	Persona persona1;
	
	persona1.ID=1;
	persona1.name="Ariana";
	persona1.lastName="Andrade";
	persona1.yearsOld=17;
	
	printf("ID persona: %i\n", persona1.ID);
	printf("Nombre persona: %s\n", persona1.name);
	printf("Apellido persona: %s\n", persona1.lastName);
	printf("Edad persona: %i\n", persona1.yearsOld);
	return 0;
}

