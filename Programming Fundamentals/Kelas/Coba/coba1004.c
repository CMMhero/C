#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int a;
	a = -5;
	a = abs(a);
	printf("abs(a) = %d\n",a);
	a = pow(5,2);
	printf("pow(5,2) = %d\n",a);
	srand(time(0));
	a = rand();
	printf("angka acak = %d",a);	//hati2 pseudo random
	system("cls");	//clrscr();
	printf("layarnya baru saja dibersihkan");
	return 0;
}

