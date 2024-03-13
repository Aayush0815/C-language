#include <stdio.h>
int main()
{
    int a, b, c;
    
    printf("Enter The Values: ");
    scanf("%d %d",&a,&b);
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("Remainder = %d \n",c);
    
    return 0;
}