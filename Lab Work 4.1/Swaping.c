#include<stdio.h>
int main() {
  int a, b, c;
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);

  c = a;

  a = b;

  b = c;

  printf("\nAfter swapping A is = %d\n", a);
  printf("After swapping B is = %d", b);
  return 0;
}
