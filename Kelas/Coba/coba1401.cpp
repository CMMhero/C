#include <stdio.h>
int main()
{
	int a;
	int *b;
	
	a=5;
	b=&a;
	
	printf("a = %d b = %X *b = %d\n",a,b,*b);
	printf("alamat b = %X\n",&b);
	return 0;
}
