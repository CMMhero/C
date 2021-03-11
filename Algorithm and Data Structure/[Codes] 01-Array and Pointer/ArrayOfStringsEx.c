#include <stdio.h>

int main() 
{
  int i;
  char words[7][10];

  for(i=0; i<7; i++)
  {
    printf("Word %d: ", i+1);
    scanf("%s", words[i]);
  }
  printf("\n");

  for(i=0; i<7; i++)
  {
    printf("%s ", words[i]);
  }
  printf("\n");

  return 0;
}