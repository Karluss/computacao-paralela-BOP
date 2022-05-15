#include <stdio.h>

#define T  1000000000

int main(void)
{
  double var = 0;

  for (double i = 1; i <= T; i++)
  {
    var += 1 / i;
  }

  printf("Resultado: %.4f\n", var);

  return 0;
}
