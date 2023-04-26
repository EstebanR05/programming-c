#include <stdio.h>

int main()
{
    int cont = 1;
    int num_enter;

    printf("Digite un numero y se dara los pares e inpares: \n");
    scanf("%i", &num_enter);

    while (cont < num_enter)
    {
        if (cont % 2 == 1)
        {
            printf("%i numero impar\n", cont);
        }
        cont = cont + 1;
        if (cont % 2 == 0)
        {
            printf("%i numero par\n", cont);
        }
        cont = cont + 1;
    }

    return 0;
}