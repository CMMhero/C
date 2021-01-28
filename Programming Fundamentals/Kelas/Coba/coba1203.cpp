#include <stdio.h>

int main ()
{
	int kar,i;
//	printf("Karakter: ");
//	scanf("%c",&kar);
	
	for(i=0; i<26; i++)
	{
		printf("Bilangan = %d, Karakter = %c, Bilangan = %d, Karakter = %c\n",65+i,65+i,97+i,97+i);
	}

	return 0;
}
/*
A = 65
a = 97
B = 66
b = 98
*/
