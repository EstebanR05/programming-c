#include <stdio.h>

// function's
int suma(int, int);
int resta(int, int);
int multiplicacion(int, int);
float division(float, float);
float potencia(float, float);
void factorial(int, int);

// main
int main()
{
    int a, b, op;
    printf("Ingresa un valor :");
    scanf("%d", &a);
    printf("Ingresa un valor :");
    scanf("%d", &b);

    do
    {
        printf("\n*******Menu*******\n");
        printf("[1] sumar \n");
        printf("[2] restar \n");
        printf("[3] multiplicacion:\n ");
        printf("[4] division:\n ");
        printf("[5] potencia:\n ");
        printf("[6] factorial:\n ");
        printf("[7] Salir del menu.\n ");

        printf("Digite una opcion: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("su Suma es: %d", suma(a, b));
            break;
        case 2:
            printf("su Resta es: %d", resta(a, b));
            break;
        case 3:
            printf("su Multiplicacion es: %d", multiplicacion(a, b));
            break;
        case 4:
            if (b != 0)
            {
                printf("La division es: %.1f \n", division((float)a, (float)b));
            }
            else
            {
                printf("El numero no es divisible entre cero \n");
            }
            break;
        case 5:
            printf("Su potencia es:  %2.f\n", potencia((float)a, (float)b));
            break;
        case 6:
            factorial(a, b);
            break;
        }

    } while (op != 7);

    return 0;
}

int suma(int n1, int n2)
{
    int result = n1 + n2;
    return result;
}

int resta(int n1, int n2)
{
    int result = n1 - n2;
    return result;
}

int multiplicacion(int n1, int n2)
{
    int result = n1 * n2;
    return result;
}

float division(float n1, float n2)
{
    float result = n1 / n2;
    return result;
}

float potencia(float n1, float n2)
{
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

    return p;
}

void factorial(int n1, int n2)
{
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
}