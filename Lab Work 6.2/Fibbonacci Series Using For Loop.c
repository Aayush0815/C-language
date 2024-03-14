#include <stdio.h>

int main() {
  int no, i, a = 0, b = 1, c;

  printf("Enter The Number: ");
  scanf("%d", &no);

  printf("Fibonacci series up to %d is: \n", no);

  for (i = 2; i < no; i++) 
  {
    c = a + b;
    printf("%d ", c);
    a = b;
    b = c;
/*    c = a + b;
    printf("%d ", c);
*/    
  }

  return 0;
}