#include <stdio.h>

#define PI 3.14159

int main(void) {
  int radius = 10;

  float volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

  printf("%f\n", volume);
}
