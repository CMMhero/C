#include <stdio.h>

int main ()
{
	int wind;
	printf("Wind speed: ");
	scanf("%d",&wind);
	if (wind<25)
		printf("Category: Not a strong wind");
	else
		if (wind<=38)
			printf("Category: Strong wind");
		else
			if	(wind<=54)
				printf("Category: Gale");
			else
				if (wind<=72)
					printf("Category: Whole gale");
				else
					printf("Category: Hurricane");
					
	return 0;
}

