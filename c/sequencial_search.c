#include <stdio.h>

const char *sequential_search(int list[], int size, int element)
{
  for (int index = 0; index < size; index++)
  {
    if (list[index] == element)
    {
      static char result[100];
      snprintf(result, sizeof(result), "%d encontrado na posição %d", element, index);
      return result;
    }
  }
  return "Não aparece na lista";
}

int main()
{
  int list[] = {1, 9, 11, 21, 34, 54, 67, 90};
  int search = 34;
  int size = sizeof(list) / sizeof(list[0]);

  const char *sequential_search_result = sequential_search(list, size, search);

  printf("Busca sequencial: %s\n", sequential_search_result);

  return 0;
}
