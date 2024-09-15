#include <stdio.h>

typedef struct {
  double real;
  double imag;
} Complex;

void print_complex(Complex c) { printf("%4.1f + %4.1fi\n", c.real, c.imag); }

void reset_complex(Complex c) { c.real = c.imag = 0.0; }

void main() {
  Complex a = {1.0, 2.0};
  printf("Before reset: ");
  print_complex(a);
  reset_complex(a);
  printf("After reset: ");
  print_complex(a);
}
