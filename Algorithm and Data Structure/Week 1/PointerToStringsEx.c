#include <stdio.h>
#include <string.h>

int main() 
{
  char word[15];
  char *wordPtr;

  strcpy(word,"Algorithm");
  wordPtr = word;

  printf("[1] word\t\t\t: %s\n", word);
  printf("[2] wordPtr\t\t\t: %s\n", wordPtr);
  printf("[3] *wordPtr\t\t: %c\n", *wordPtr);
  printf("[4] *(wordPtr+2)\t: %c\n", *(wordPtr+2));

  strcpy(word,"Programming");
  printf("[5] wordPtr\t\t\t: %s\n", wordPtr);

  wordPtr = "Computer";
  printf("[6] word\t\t\t: %s\n", word);
  printf("[7] wordPtr\t\t\t: %s\n", wordPtr);

  return 0;
}