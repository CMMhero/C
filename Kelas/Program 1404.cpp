#include <stdio.h>
void sigma(int *n)
{
	int i;
	for(i=*n-1;i>0;i--)
		*n+=i;
}
int main()
{
	int a=10;
	
	sigma(&a);
	printf("Result = %d",a);
	
	return 0;
}

