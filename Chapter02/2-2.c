#include <stdio.h>

void copy_array(int a[], int b[], int len) {
  for (int i = 0; i < len; i++) {
    b[i] = a[i];
  }
}

void copy_variable(int a, int b) { b = a; }

void main() {
  int A[5] = {10, 20, 30}, B[5];
  int x = 2018, y = 0;

  copy_variable(x, y);
  copy_array(A, B, 5);

  printf("Variable copy result: x=%d, y=%d\n", x, y);
  printf("Array copy result:\n");
  for (int i = 0; i < 5; i++) {
    printf("A[%d]=%d\t", i, A[i]);
    printf("B[%d]=%d\n", i, B[i]);
  }
}
