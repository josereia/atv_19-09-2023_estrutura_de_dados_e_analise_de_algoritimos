#include <stdio.h>

int binary_search(int number_list[], int first_index, int last_index, int searched_value)
{
  if (last_index >= first_index)
  {
    int middle_element_index = (first_index + last_index) / 2;
    int middle_element = number_list[middle_element_index];

    if (middle_element == searched_value)
    {
      return middle_element_index;
    }
    else if (middle_element > searched_value)
    {
      int new_position = middle_element_index - 1;
      // novo último índice é a nova posição
      return binary_search(number_list, first_index, new_position, searched_value);
    }
    else if (middle_element < searched_value)
    {
      int new_position = middle_element_index + 1;
      // novo primeiro índice é a nova posição
      return binary_search(number_list, new_position, last_index, searched_value);
    }
  }
  else
  {
    return -1;
  }
}

int main()
{
  int list[] = {1, 9, 11, 21, 34, 54, 67, 90};
  int search = 34;
  int first = 0;
  int last = sizeof(list) / sizeof(list[0]) - 1;

  int binary_search_result = binary_search(list, first, last, search);

  if (binary_search_result != -1)
  {
    printf("Busca binária: %d encontrado na posição %d\n", search, binary_search_result);
  }
  else
  {
    printf("Busca binária: Não aparece na lista\n");
  }

  return 0;
}
