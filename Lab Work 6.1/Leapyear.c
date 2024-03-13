#include<stdio.h>
void main()
{
    int a,b,c;
    
    printf("Enter the years:");
    scanf("%d %d",&a ,&b);
    
    while(a<=b)
    {
        if(a%4==0)
        {
            printf("Years is %d.\n",a);
        }
        a++;
    }
    
}