#include <stdio.h>

void printArray(int arr[][3])
{
  int iRow, iCol;

  for(iRow=0; iRow<=1; iRow++)
  {
    for(iCol=0; iCol<=2; iCol++)
    {
      printf("%d ", arr[iRow][iCol]);
    }
    printf("\n");
  }

}

int main() 
{
  int numbers1[2][3] = {{1,2,3},{4,5,6}};
  int numbers2[2][3] = {1,2,3,4,5};
  int numbers3[2][3] = {{1,2},{4}};

  printf("Numbers1:\n");
  printArray(numbers1);
  printf("Numbers2:\n");
  printArray(numbers2);
  printf("Numbers3:\n");
  printArray(numbers3);


  return 0;
}