#include <stdio.h>
void f(int *x, int *y)
{
	*x*+2;
	*y*=3;
}
int main()
{
	int a=25,b=30;
	
	f(&a,&b);
	printf("%d %d",a,b);
	return 0;
}

