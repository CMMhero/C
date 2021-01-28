#include <stdio.h>
int main ()
{
	int x=14, y=5;
	y = x++ % 3;
	printf("x = %d\n",x);
	printf("y = %d\n",y);	
	
	return 0;
}
