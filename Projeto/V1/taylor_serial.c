#include <stdio.h>
#include <time.h>

int main(void)
{
  float var = 0;
  clock_t t;

  t = clock();
  for (float i = 1; i <= 10; i++)
  {
    var += 1 / i;
  }

  printf("Resultado: %.2f\n", var);
  
  t = clock() - t;

  printf("Tempo de execucao: %lf\n", ((double)t) / ((CLOCKS_PER_SEC / 1000)));

  return 0;
}
