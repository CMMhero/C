#include <stdio.h>

int sum(int n[])
{
  int result = 0, i;

  for(i=0; i<5; i++)
  {
    result += n[i];
  }

  return result;

}

int main() 
{
  int total;
  int number[5]={37,19,85,46,93};

  total = sum(number);
  printf("Sum = %d\n", total);

  return 0;
}