#include <stdio.h>

int max(max, max);

int main()
{
    int a = 10;
    int b = 20;
    printf("%d \n", max(a, b));
}

int max(int x, int y)
{
    int z = 0;
    if (x > y)
    {
        z = x;
    }
    else
    {
        z = y;
    }
    return z;
}