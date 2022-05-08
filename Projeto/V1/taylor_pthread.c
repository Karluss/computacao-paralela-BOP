#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

#define TAM 1000

int thread_count;
double sum = 0;

void *Taylor(void *rank);

int main(int argc, char *argv[])
{

  clock_t t;
  long thread;
  pthread_t *thread_handles;

  thread_count = strtol(argv[1], NULL, 10);

  thread_handles = malloc(thread_count * sizeof(pthread_t));

  t = clock();

  for (thread = 0; thread < thread_count; thread++)
  {
    pthread_create(&thread_handles[thread], NULL, Taylor, (void *)thread);
  }

  for (thread = 0; thread < thread_count; thread++)
  {
    pthread_join(thread_handles[thread], NULL);
  }

  free(thread_handles);

  t = clock() - t;

  printf("Tempo de execucao com 4 threads: %lf", ((double)t) / ((CLOCKS_PER_SEC / 1000)));
  return 0;
};

void *Taylor(void *rank)
{
  long my_rank = (long)rank;
  int num = (my_rank * (100 / thread_count)) + 1;
  int condition = num + (100 / thread_count);

  for (double i = num; i < condition; i++)
  {
    sum += 1 / i;
  }

  printf("Resultado: %.2f da thread %ld\n", sum, my_rank);

  return NULL;
}