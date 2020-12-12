#include <stdio.h>
#include <ctype.h>

//SBP >= 120 and pria -> bahaya
//SBP >= 120 and wanita -> aman
//SBP < 120 and pria -> normal
//SBP < 120 and wanita -> rendah
int main () 
{
	int sbp;
	char jk;
	//sbp = 125;
	printf("Jenis kelamin (p/w): ");
	scanf("%c",&jk);
	jk=toupper(jk);
	printf("SBP: ");
	scanf("%d",&sbp);
	if(sbp>=120)
		if(jk=='P')
			printf("Bahaya\n");
		else
			printf("Aman\n");
	else
		if(jk=='P')
			printf("Normal\n");
		else
			printf("Rendah\n");
//	if(sbp>=120 && jk=='P')
//		printf("Bahaya\n");
//	if(sbp>=120 && jk=='W')
//		printf("Aman\n");
//	if(sbp<120 && jk=='P')
//		printf("Normal\n");
//	if(sbp<120 && jk=='W')
//		printf("Rendah\n");
				 
	return 0;
}

