#include <stdio.h>
//SBP >= 120 and pria -> bahaya
//SBP >= 120 and wanita -> aman
//SBP < 120 and pria -> normal
//SBP < 120 and wanita -> rendah
int main () 
{
	int sbp;
	//sbp = 125;
	scanf("%d",&sbp);
	if(sbp>140)
		printf("Hypertension\n");
	else
		if(sbp>120)
			printf("Pre-Hypertension\n");
		else
			if(sbp>90)
				printf("Normal\n");
			else
				printf("Hypotension\n");
				
	return 0;
}

