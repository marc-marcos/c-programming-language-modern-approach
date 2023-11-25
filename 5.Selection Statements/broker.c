#include <stdio.h>

int main(void) {
  float transaction_size;

  printf("Input the transaction size: ");
  scanf("%f", &transaction_size);

  if (transaction_size < 2500.0f) {
    printf("The comission will be: %.2f\n", 30.0f + transaction_size * 0.017f);
  }

  else if (transaction_size >= 2500.0f && transaction_size < 6250.0f) {
    printf("The comission will be: %.2f\n", 56.0f + transaction_size * 0.0066f);
  }

  else if (transaction_size >= 6250.0f && transaction_size < 20000.0f) {
    printf("The comission will be: %.2f\n", 76.0f + transaction_size * 0.0034f);
  }

  else if (transaction_size >= 20000.0f && transaction_size < 50000.0f) {
    printf("The comission will be: %.2f\n",
           100.0f + transaction_size * 0.0022f);
  }

  else if (transaction_size >= 50000.0f && transaction_size < 500000.0f) {
    printf("The comission will be: %.2f\n",
           155.0f + transaction_size * 0.0011f);
  }

  else {
    printf("The comission will be: %.2f\n",
           255.0f + transaction_size * 0.0009f);
  }

  return 0;
}
