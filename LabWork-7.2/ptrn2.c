#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf("  ");
        }
        for (k = 5 - i + 1; k <= 5; k++)
        {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
