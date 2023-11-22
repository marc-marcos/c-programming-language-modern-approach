#include <stdio.h>

int main(void) {
  int number;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &number);

  int oct_1, oct_2, oct_3, oct_4, oct_5;
  oct_5 = number % 8;
  oct_4 = (number / 8) % 8;
  oct_3 = ((number / 8) / 8) % 8;
  oct_2 = (((number / 8) / 8) / 8) % 8;
  oct_1 = ((((number / 8) / 8) / 8) / 8) % 8;

  printf("In octal, your number is: %d%d%d%d%d\n", oct_1, oct_2, oct_3, oct_4,
         oct_5);
}
