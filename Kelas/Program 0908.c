#include <stdio.h>
int main()
{
	int x = 8, y = 12, z;
	z = x << y / 4;
	y >>= x / 4;

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);

	return 0;
}