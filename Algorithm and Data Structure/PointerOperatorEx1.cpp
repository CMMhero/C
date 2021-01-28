#include <stdio.h>

void factorial(int *n)
{
	int i;
	for(i=*n-1; i>1; i--)
		*n *= i;
}

//void factorial1(int n)
//{
//	int i;
//	for(i=n-1; i>1; i--)
//		n *= i;
//	printf("n: %d\n", n);
//}

int main()
{
	int number = 5;
	factorial(&number);	//call by referece
//	factorial1(number);
	printf("5! = %d\n", number);
	
	return 0;
}

