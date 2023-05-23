#include<stdio.h>
#include "Estudiante.h"

int main (int argc, char *argv[]) {
	
	Estudiante estudiante[3];
	
	for(int i=0; i<3; i++){
		printf("\n Ingresar nombre: \n ");
		scanf("%s", &estudiante[i].names);
		
		printf("\n Ingresar id: \n ");
		scanf("%d", &estudiante[i].ID);
		
		for(int j=0; j<3; j++){
			printf("\n Ingresar 3 notas \n ");
			scanf("%f", &estudiante[i].nota[j]);
		}
	}
	
	for(int n=0; n<3; n++){
		printf("nombre del estudiante es: %ls \n ", &estudiante[n].names);
		printf("ID del estudiante es: %d \n ", &estudiante[n].ID);
		for(int l=0; l<3; l++){
			printf("nota %d del estudiante es: %f \n ", l, &estudiante[n].nota[l]);			
		}
	}
}


