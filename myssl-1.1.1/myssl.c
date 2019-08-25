#include <stdio.h>

int ssl_func1(int a, int b)
{
  printf("ssl-1.1.1: %s: a=%d, b=%d\n", __func__, a, b);
  return a + b;
}

int ssl_func2(double a, double b)
{
  printf("ssl-1.1.1: %s: a=%lf, b=%lf\n", __func__, a, b);
  return a + b;
}
