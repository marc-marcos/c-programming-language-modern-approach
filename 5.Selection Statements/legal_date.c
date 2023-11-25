#include <stdio.h>

int main(void) {
  int month;
  int day;
  int year;

  printf("Enter date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Dated this %d", day);

  switch (day) {
  case 1:
  case 21:
  case 31:
    printf("st ");
    break;
  case 2:
  case 22:
    printf("nd ");
    break;
  case 3:
  case 23:
    printf("rd ");
    break;
  default:
    printf("th ");
    break;
  }

  printf("of %d, 20%d.\n", month, year);

  return 0;
}
