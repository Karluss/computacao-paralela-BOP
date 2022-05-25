#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define T 1000000000

double Taylor(double* global_result_p);

int main(int argc, char *argv[])
{
  double global_result = 0.0;
  int thread_count;

  thread_count = strtol(argv[1], NULL, 10);

  # pragma omp parallel num_threads (thread_count)
  Taylor(&global_result);

  printf("Resultado: %.4f\n", global_result);


  return 0;
};

double Taylor(double* global_result_p)
{
  long my_rank = omp_get_thread_num();
  int thread_count = omp_get_num_threads();
  int num = (my_rank * ( T / thread_count)) + 1;
  int condition = num + (T / thread_count);
  double sum = 0.0;

  # pragma omp parallel for num_threads(thread_count)
    //reduction(+:sum);

    for (double i = num; i < condition; i++)
    {
        sum += 1 / i;
    }


  printf("Thread %ld => Resultado: %.4f\n", my_rank, sum);
}