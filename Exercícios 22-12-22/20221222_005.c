#include <stdio.h>

void main() {
  int i, num = 1;
  float soma;

  for (i=1; i<=50; i++) {
    soma += (num / (i));
    num = num + 2;
  }

  printf("1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50 = %.2f\n", soma);
}
