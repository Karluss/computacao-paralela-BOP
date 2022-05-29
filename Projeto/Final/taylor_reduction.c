#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define T 100000000000// 11 zeros

void Taylor(double* global_result_p, int thread_count);

int main(int argc, char *argv[])
{
  double global_result = 0.0;
  int thread_count;

  thread_count = strtol(argv[1], NULL, 10);

  Taylor(&global_result, thread_count);

  return 0;
};

void Taylor(double* global_result_p, int thread_count)
{
  double sum = 0.0;

  #pragma omp parallel for num_threads(thread_count) \
    reduction(+:sum)

  for (long int i = 1; i < T; i++)
   {
        double den = i;
        sum += 1 / den;
   }


  printf("Resultado: %.4f\n", sum);
}