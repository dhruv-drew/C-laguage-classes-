#include <stdio.h>

int main() {
  float first, second, temp;

  printf("Enter the first number: ");
  scanf("%f", &first);
  printf("Enter the second number: ");
  scanf("%f", &second);

  temp = first;

  first = second;

  second = temp;

  printf("\nAfter swapping:\n");
  printf("First number: %f\n", first);
  printf("Second number: %f\n", second);

  return 0;
}