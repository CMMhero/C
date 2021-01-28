#include <stdio.h>

int main ()
{
	int grade;
	
	scanf("%d",&grade);
	if(grade >= 55)
		printf("Passed\n");
	else
		printf("Failed\n");
		printf("You must take this course again\n");

	return 0;
}

//Input: 85
//Output: Passed, You must take this course again

