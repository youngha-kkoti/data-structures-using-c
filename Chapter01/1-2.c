#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  clock_t start, finish;
  double duration;
  start = clock();
  //
  // code
  //
  finish = clock();
  duration = (double)(finish - start) / CLOCKS_PER_SEC;
  printf("%fs", duration);
}
