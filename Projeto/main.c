#include <stdio.h>

int main(void)
{
  float var = 0;

  for (float i = 1; i <= 10; i++)
  {
    var += 1 / i;
  }

  printf("\n");
  printf("Resultado: %.2f", var);
  printf("\n");

  return 0;
}