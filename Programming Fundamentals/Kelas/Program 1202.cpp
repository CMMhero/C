#include <stdio.h>

int main ()
{
	int i, j=0;
	
	i=10;
	while(1)
	{
		i--;
		if(i == 0) break;
		if(i%2 == 0) continue;
		j += 1;
	}
	printf("%d",j);

	return 0;
}

