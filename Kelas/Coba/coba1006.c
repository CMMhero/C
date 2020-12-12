#include <stdio.h>

int main ()
{
	char kal[50];	//ini adalah string
	
	//scanf("%s",&kal);	//ini hanya sampai ketemu spasi
	//scanf("%[^\n]",& kal);	//ini sampai ketemu \n (sampai enter)
	//scanf("%[^n]",& kal);	//ini sampai ketemu n (sampai enter)
	gets(kal);
	
	//printf("%s",kal);
	puts(kal);
	
	return 0;
}

