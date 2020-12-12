// hati hati dengan INDENTASI
#include <stdio.h>

int main ()
{
	int noise;
	scanf("%d",&noise);
	if(noise <= 50) 
		printf("Quiet\n");
	if(noise <= 70) 
		printf("Intrusive\n");
	if(noise <= 90) 
		printf("Annoying\n");
	if(noise <= 110) 
		printf("Very Annoying\n");
	else 
		printf("Uncomforable\n");

	return 0;
}

//Input: 80
//Output : Annoying, Very Annoying

