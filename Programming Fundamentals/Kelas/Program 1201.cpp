#include <stdio.h>

int main ()
{
	int i, j =10;
	
	i=0;
	for(;i < 5;)
	{
		j += i++ +1;
	}
	printf("%d",j);

	return 0;
}

