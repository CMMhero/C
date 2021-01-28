#include <stdio.h>
int main()
{
	int number = 8;
	int *numberPtr;
	
	numberPtr = &number;
	
	printf("* and & are complements of each other\n");
	printf("&*numberPtr = %p\n", &*numberPtr);	//
	printf("*&numberPtr = %p\n", *&numberPtr);	// 
	return 0;
}

