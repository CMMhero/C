#include <stdio.h>

int jumlah(int x, int y)
{
	int z;
	z=x+y;
	return z;
}

int main()
{
	int a,b,c;
	a=5;
	b=20;
	c=jumlah(a,b);
	printf("%d\n",c);
	return 0;
}

