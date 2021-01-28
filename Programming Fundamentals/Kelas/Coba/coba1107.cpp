#include <stdio.h>
/*
	sbp=140 Hype
	sbp=120 Pre-Hype
	sbp=90 Normal
	sbp=50 Hypo
*/
int main ()
{
	int sbp;
	scanf("%d",&sbp);
	switch(sbp)
	{
		default  : 	printf("Sehat\n");
					break;		
		case 140 : 	printf("Hype\n");
					break;
		case 120 : 	printf("Pre-Hype\n");
					break;
		case 90  : 	printf("Normal\n");
					break;
		case 50  : 	printf("Hypo\n");
					break;

	}
	printf(":)\n");
	return 0;
}

