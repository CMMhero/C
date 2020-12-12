#include <stdio.h>
int main ()
{
	int x = 8, y = 6, p, q, r;
	p = x & y;
	q = x | y;
	r = x ^ y;

	printf("p = %d\n",p);
	printf("q = %d\n",q);
	printf("r = %d\n",r);
	
	return 0;
}


