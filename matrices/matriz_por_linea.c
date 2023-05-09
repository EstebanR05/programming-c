#include <stdio.h>

int main()
{
    int matriz[5][5];
    int i, j, k = 1;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matriz[i][j] = k;
            printf("%d ", matriz[i][j]);
            k++;
        }
        printf("\n");
    }

    return 0;
}