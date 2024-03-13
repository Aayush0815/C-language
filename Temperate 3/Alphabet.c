#include <stdio.h>

int main()
{
    char ch = 'a';

    printf("The Alphabets Are:\n");
    
    do
    {
        printf("%c\n", ch);
        ch+=4;
    }    
    while(ch<='z');
    
    return 0;
}
