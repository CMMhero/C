#include <stdio.h>

int main ()
{
	int a = 15;
	if(a > 10)
		printf("a > 10\n");
	else
		a = a-5;
	printf("a <= 10\n");
	printf("%d",a);
	return 0;
}

/*
if(a>max)
	max = a;
else
	max = max; //tidak ada gunanya
*/

