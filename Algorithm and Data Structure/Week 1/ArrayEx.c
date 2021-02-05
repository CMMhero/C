#include <stdio.h>

int main(void) {
  int a[100] = {0,1};
  int b[]={1,2,3,4,5};//initializer
  int i;

  for(i=0;i<100;i++)
  {
    printf("%d: %d\n", i, a[i]);
  }

  return 0;
}