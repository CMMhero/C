#include <stdio.h>
int main ()
{
	int a,b,sum,avg;
	printf("Number 1: ");
	scanf("%d",&a);
	printf("Number 2: ");
	scanf("%d",b);
	sum = a+b;
	avg = (a+b)/2;
	printf("Sum = ",sum);
	printf("Average = ",avg);
	
	return 0;
}
