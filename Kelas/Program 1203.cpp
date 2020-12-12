#include <stdio.h>

int main ()
{
	int i, j;
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 5;j++)
		{
			printf("%3d",5*i+j+1);
		}
		printf("\n");
	}

	return 0;
}

