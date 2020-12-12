//& dan * saling mentralkan  --> complement
#include <stdio.h>
int main()
{
	int a;
	int *b;
	
	a=5;
	b=&a;
	
	printf("&*b = %p\n",&*b);
	printf("*&b = %p\n",*&b);
	printf(" b  = %p\n",b);
	
	return 0;
}
