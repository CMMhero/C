#include <stdio.h>

int main ()
{
	int x = 5;

	(x==5) ?  printf("sama"), printf(" :)") : printf("beda");
	printf("\n");
	(x==0) ?  printf("sama") : printf("beda");
	printf("\n");
	printf("%d",x);
	
	return 0;
}
