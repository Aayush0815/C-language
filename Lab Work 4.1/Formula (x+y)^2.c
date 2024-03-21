#include <stdio.h>
int main()
{
    double x, y, ans;
    printf("Enter the value x&y: ");
    scanf("%.2f %.2f", &x, &y);
    ans = (x + y) * (x + y);
    printf("The result is: %.2f\n", ans);
    return 0;
}
