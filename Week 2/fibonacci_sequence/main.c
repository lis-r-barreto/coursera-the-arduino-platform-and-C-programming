#include <stdio.h>

int fibonacci(int n);

int main(void)
{
  int i;
  printf("Fibonacci Sequence: ");
  for(i = 1; i <= 6; i++)
    printf("%d ", fibonacci(i-1));
    printf("\n");
  return 0;
}

int fibonacci(int n)
{
  if(n == 0)
    return 0;
  else if(n == 1)
    return 1;
return fibonacci(n-2) + fibonacci(n-1);
} 