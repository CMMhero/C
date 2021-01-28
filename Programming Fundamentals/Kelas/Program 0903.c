#include <stdio.h>
int main ()
{
	int x = 3, y = 5;
	y *= 12 / ++x;
	printf("x = %d\n",x);
	printf("y = %d\n",y);	
	
	return 0;
}
