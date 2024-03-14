#include <stdio.h>
int main() 
{
    int no, i, sum = 0;

    printf("Enter The Number: ");
    scanf("%d", &no);

    for (i = 1; i <= no; i++) 
    {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}

