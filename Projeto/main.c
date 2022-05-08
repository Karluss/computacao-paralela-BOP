#include <stdio.h>

int main(void)
{
  float var = 0;

  for (float i = 1; i <= 10; i++)
  {
    var += 1 / i;
  }

  printf("Resultado: %.2f\n", var);

  return 0;
}
