#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>

int main() {
	
	for(int h = 0; h <= 23; h++){		
		for(int m = 0; m <= 59; m++){
			for(int s = 0; s<= 59; s++){
				printf("%d: %d: %d", h, m, s);
				sleep(1);
				system("cls");
			}
		}
	}
	
	return 0;
}