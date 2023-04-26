#include <stdio.h>

int main()
{
    int n1, n2, index;

    printf("Ingrese su primer número: ");
    scanf("%d", &n1);
    printf("Ingrese su segundo número: ");
    scanf("%d", &n2);

    for (index = n1; index <= n2; index += 2)
    {
        printf("%d \n", index);
    }

    return 0;
}