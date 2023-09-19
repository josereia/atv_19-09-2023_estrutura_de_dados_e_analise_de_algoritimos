#include <stdio.h>

int calculate_factorial(int n)
{
  if (n == 0)
  {
    return 1;
  }
  else
  {
    return n * calculate_factorial(n - 1);
  }
}

int main()
{
  int number = 5;
  int result = calculate_factorial(number);
  printf("O fatorial de %d é %d\n", number, result);
  return 0;
}
