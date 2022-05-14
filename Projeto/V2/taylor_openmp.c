#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define T 100

int thread_count;

void Taylor(double* global_result_p);

int main(int argc, char *argv[])
{
  double global_result = 0.0;

  thread_count = strtol(argv[1], NULL, 10);

  # pragma omp parallel num_threads (thread_count)
  Taylor(&global_result);

  printf("Resultado: %.4f\n", global_result);


  return 0;
};

void Taylor(double* global_result_p)
{
  long my_rank = omp_get_thread_num();
  int num = (my_rank * ( T / thread_count)) + 1;
  int condition = num + (T / thread_count);
  float sum;

  for (double i = num; i < condition; i++)
  {
    sum += 1 / i;
  }

  # pragma omp critical
  *global_result_p += sum;


}
