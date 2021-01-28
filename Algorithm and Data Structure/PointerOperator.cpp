#include <stdio.h>
int main()
{
	int number = 5;
	int *numberPtr;
	numberPtr = &number;
	printf("%d\n",*numberPtr);
	
	return 0;
}
