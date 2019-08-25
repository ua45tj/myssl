#include <stdio.h>

int ssl_func1(int a, int b)
{
  printf("STABLE ssl-1.0.2: %s: a=%d, b=%d\n", __func__, a, b);
  return a + b;
}

int ssl_func2(double a, double b)
{
  printf("STABLE ssl-1.0.2: %s: a=%lf, b=%lf\n", __func__, a, b);
  return a + b;
}
