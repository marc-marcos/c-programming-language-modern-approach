#include <stdio.h>

int main(void) {
  int item_num, m, d, y;
  float unit_price;

  printf("Enter item number: ");
  scanf("%d", &item_num);
  printf("Enter unit price: ");
  scanf("%f", &unit_price);
  printf("Enter purchase date (dd/mm/yyyy): ");
  scanf("%d/%d/%d", &d, &m, &y);

  printf("\nItem\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n\n");
  printf("%d\t\t$%.2f\t\t%.2d/%.2d/%.4d\n", item_num, unit_price, d, m, y);
}
