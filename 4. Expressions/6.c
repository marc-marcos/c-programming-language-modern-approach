#include <stdio.h>

int main(void) {
  int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;
  printf("Input the first 12 numbers of an EAN: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6,
        &n7, &n8, &n9, &n10, &n11, &n12);

  printf("Check digit: %d\n", 9 - (((((n2 + n4 + n6 + n8 + n10 + n12) * 3) +
                                     (n1 + n3 + n5 + n7 + n9 + n11)) -
                                    1) %
                                   10));
}
