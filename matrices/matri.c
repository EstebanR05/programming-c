#include <stdio.h>

int main()
{
    int matriz[5][5];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Hello World");

    return 0;
}