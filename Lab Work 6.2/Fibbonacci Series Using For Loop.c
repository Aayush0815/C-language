#include <stdio.h>

int main() {
  int no, i, a = 0, b = 1, c;

  printf("Enter The Number: ");
  scanf("%d", &no);

  printf("Fibonacci series up to %d is: \n", no);

  for (i = 2; i < no; i++) 
  {
    printf("%d ", a);
    c = a + b;
    a = b;
    b = c;
  }

  return 0;
}