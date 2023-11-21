#include <stdio.h>

#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
  float input;
  printf("Input some Farenheit degrees: ");
  scanf("%f", &input);

  printf("You've entered %.1f degrees Farenheit.\n", input);
  printf("That's %.1f degrees Celsius.\n", (input - 32) * SCALE_FACTOR);
}
