#include <stdio.h>

int main()
{
    int num;
    printf("digite un numero: ");
    scanf("%d", &num);

    int i = 1;
    int op;

    do
    {
        op = num * i;
        printf("%d x %d = %d \n", num, i, op);
        i++;
    } while (i < 11);

    return 0;
}
