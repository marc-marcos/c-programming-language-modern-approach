#include <stdio.h>

int main(void) {
  int number;

  printf("Enter a three-digit number: ");
  scanf("%d", &number);
  printf("Here is the number reversed: %d%d%d\n", number % 10,
         (number / 10) % 10, number / 100);
}
