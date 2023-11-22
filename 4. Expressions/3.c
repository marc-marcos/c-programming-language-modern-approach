#include <stdio.h>

int main(void) {
  int number_1, number_2, number_3;

  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &number_1, &number_2, &number_3);
  printf("Here is the number reversed: %d%d%d\n", number_3, number_2, number_1);
}
