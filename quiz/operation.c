#include <stdio.h>
int main()
{
    int n1, n2, op, f, n3;
    float ans = 1;
    int i = 1;

    printf("Ingrese su primer numero: \n");
    scanf("%d", &n1);
    printf("Ingrese su segundo numero: \n");
    scanf("%d", &n2);

    do
    {
        printf("***************MENU DE SELECCION*******************\n ");
        printf("1. suma:\n ");
        printf("2. resta:\n ");
        printf("3. multiplicacion:\n ");
        printf("4. division:\n ");
        printf("5. potencia:\n ");
        printf("6. factorial:\n ");
        printf("7. Salir del menu.\n ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("La suma es: %d \n ", n1 + n2);
            break;
        case 2:
            printf("La resta es: %d \n ", n1 - n2);
            break;
        case 3:
            printf("La multiplicacion es: %d \n ", n1 * n2);
            break;
        case 4:
            if (n2 != 0)
            {
                ans = (float)n1 / (float)n2;
                printf("La division es: %.1f \n ", ans);
            }
            else
            {
                printf("El numero no es divisible entre cero \n");
            }
            break;
        case 5:
            printf("\n potencia con while\n");

            int n = n2;
            double p = 1;
            int c = 0;

            while (c < n)
            {
                if (n == 0)
                {
                    p = 1;
                }
                else if (n > 0)
                {
                    c++;
                    p = p * n1;
                }
            }

            printf("Su potencia es:  %2.f\n", p);
            break;

        case 6:
            printf("\n Factorial con for\n");
            int i;
            int f = 1;
            printf("%d! = ", n1);
            for (i = 1; i <= n1; i++)
            {
                if (i < n1)
                {
                    printf("%d x ", i);
                }
                else
                {
                    printf("%d", n1);
                }
                f *= i;
            }
            printf(" = %d\n", f);
            break;
        }

    } while (op != 7);

    return 0;
}