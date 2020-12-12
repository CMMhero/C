/*

Contoh program menukar data
input : 8 10
output : 10 8

*/

#include <stdio.h>
int main ()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Sebelum ditukar: a=%5d b=%5d\n",a,b);		//kalau printf bisa diformat
	c = a;
	a = b;
	b = c;
	printf("Sesudah ditukar: a=%5d b=%5d\n",a,b);
	return 0;
}
