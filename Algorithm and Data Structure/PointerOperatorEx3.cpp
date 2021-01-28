#include <stdio.h>
int main()
{
	int number = 8;
	int *numberPtr;
	
	numberPtr = &number;
	
	*numberPtr = number+7;
	printf("number = %d\n", number);
	
	return 0;
}

