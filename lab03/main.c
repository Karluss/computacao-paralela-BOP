#include <stdio.h>
#include <stdlib.h>

struct Person
{
  char name[50];
  int age;
  float height;
};

int comparePersons(const void *PersonOne, const void *PersonTwo)
{
  float obj1 = ((struct Person *)PersonOne)->height;
  float obj2 = ((struct Person *)PersonTwo)->height;

  if (obj1 < obj2)
    return -1;
  if (obj1 > obj2)
    return 1;

  return 0;
}

int main()
{
  struct Person array[10];
  FILE *fptr;

  fptr = fopen("./peoples.txt", "r");

  if (fptr == NULL)
  {
    printf("\nErro na leitura do arquivo!\n");
    exit(1);
  }

  int j = 0;
  while (!feof(fptr))
  {
    fscanf(fptr, "%s", array[j].name);
    fscanf(fptr, "%d", &array[j].age);
    fscanf(fptr, "%f", &array[j].height);
    j++;
  }

  qsort(array, j - 1, sizeof(struct Person), comparePersons);

  for (int i = 0; i < j - 1; i++)
  {
    printf("\nNome: %s", array[i].name);
    printf("\nIdade: %d", array[i].age);
    printf("\nAltura: %.2f\n", array[i].height);
  }

  fclose(fptr);

  return 0;
}