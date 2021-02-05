#include <stdio.h>

int main() 
{
  int number = 8;
  int *numberPtr;

  numberPtr = &number;
  printf("The address of number is %p\n", &number);
  printf("The value of *numberPtr is %d\n", *numberPtr);

  return 0;
}