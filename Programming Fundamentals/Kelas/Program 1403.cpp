#include <stdio.h>
void f(int **x, int **y)
{
	**y *= **x;
}
int main()
{
	int a=25, b=30;
	int *aPtr=&a, *bPtr=&b;
	
	f(&aPtr,&bPtr);
	printf("%d %d",a,b);
	return 0;
}

