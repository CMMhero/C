//break
#include <stdio.h>

int main ()
{
	int kar,i;
//	scanf("%c",&kar);
	for(i='A'; i<='Z'; i++)
	{
		if(i == 'M') 
			break;		// berhenti menjalankan perulangan
		if(i == 'C')
			continue;	// semua yg dibawah continue diskip tapi perulangan tetap dilanjutkan
		printf("Bilangan = %d, Karakter = %c\n",i,i);
	}
	
	return 0;
}
/*
A = 65
a = 97
B = 66
b = 98
*/
