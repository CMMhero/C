#include <stdio.h>

int main ()
{
	char color;
	
	color = getchar();
	switch(color)
	{
		case 'R': printf("Red\n");
		case 'G': printf("Green\n");
		case 'B': printf("Blue\n");
	}

	return 0;
}

//Input: R
//Output: Red, Green, Blue

