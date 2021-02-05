#include <stdio.h>

int main() 
{
  int number[5];

  printf("number = %p\n", number);
  printf("number[0] = %p\n", &number[0]);
  printf("&number = %p\n", &number);

  return 0;
}