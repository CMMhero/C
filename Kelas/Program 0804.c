/*

Cek bilangan ganjil atau genap
input: 10
output: genap

*/

#include <stdio.h>
int main ()
{
	int bil;
	scanf("%d",&bil);
	if(bil%2==0)
	{
		printf("Genap");
	}
	else
	{
		printf("Ganjil");
	}
	
	return 0;
}
