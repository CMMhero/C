#include <stdio.h>
int main ()
{
	int x = 10, y = 20, z = 30;
	x *= y += ++z;
	printf("x = %d\n",x);
	printf("y = %d\n",y);	
	printf("z = %d\n",z);
	
	return 0;
}


