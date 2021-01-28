#include <stdio.h>

int main ()
{
	int w;
	printf("Watts: ");
	scanf("%d",&w);
	switch(w)
	{
		default	: 	printf("-1");
					break;
		case 15	: 	printf("Brigtness: 125 Lumens");
					break;
		case 25	: 	printf("Brigtness: 215 Lumens");
					break;
		case 40	: 	printf("Brigtness: 500 Lumens");
					break;
		case 60	: 	printf("Brigtness: 880 Lumens");
					break;
		case 75	: 	printf("Brigtness: 1000 Lumens");
					break;
		case 100: 	printf("Brigtness: 1675 Lumens");
					break;
	}

	return 0;
}

