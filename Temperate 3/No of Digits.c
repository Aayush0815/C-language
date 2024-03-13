#include <stdio.h>

int main()
{
    int no,count=0,r;
    printf("Enter The Number:");
    scanf("%d",&no);
    
    while(no>0)
    {
        r = no%10;
        count++;
        no = no/10;
    }
    printf("No of Digits are: %d",count);
    
    return 0;
}