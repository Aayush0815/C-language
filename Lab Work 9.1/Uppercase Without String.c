#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("Uppercase string: %s\n", str);
    return 0;
}
