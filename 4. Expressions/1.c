#include <stdio.h>

int main(void) {
  int number;

  printf("Enter a two-digit number: ");
  scanf("%d", &number);
  printf("Here is the number reversed: %d%d\n", number % 10, number / 10);
}
