#include <stdio.h>

int main ()
{
	int kar,i;
	printf("Karakter: ");
	scanf("%c",&kar);

//	for(i=0; i<256; i++)
//	{
//		printf("Bilangan = %d, Karakter = %c\n",i,i);
//	}

// toupper versi kita
	if(kar>=97 && kar<=123)
	{
		kar = kar-32;
	}

	printf("%c\n",kar);

	return 0;
}
/*
A = 65
a = 97
B = 66
b = 98
*/
