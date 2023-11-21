#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void) {
  int height, length, width, volume, weigth;

  height = 8;
  length = 12;
  width = 10;
  volume = height * length * width;
  weigth = (volume + 165) / INCHES_PER_POUND;

  printf("Enter the height of the box: ");
  scanf("%d", &height);
  printf("Enter the length of the box: ");
  scanf("%d", &length);
  printf("Enter the width of the box: ");
  scanf("%d", &width);

  printf("Dimensions %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weigth (pounds): %d\n", weigth);

  return 0;
}
