#include <stdio.h>

int main() {
  int A[5] = {10, 20, 30}, B[5];
  int x = 2018, y;

  y = x;
  for (int i = 0; i < 5; i++) {
    B[i] = A[i];
  }

  printf("Variable copy result: x=%d, y=%d\n", x, y);
  printf("Array copy result:\n");
  for (int i = 0; i < 5; i++) {
    printf("A[%d]=%d\t", i, A[i]);
    printf("B[%d]=%d\n", i, B[i]);
  }
}
