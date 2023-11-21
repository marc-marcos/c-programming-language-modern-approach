#include <stdio.h>

#define PI 3.14159

int main(void) {
  float radius;

  printf("Enter the radius of the sphere (cm): ");
  scanf("%f", &radius);

  float volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

  printf("The sphere has a volume of: %.2f cm^3\n", volume);
}
