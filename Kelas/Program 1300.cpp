//sudah ada int a. kalo dideklarasi lagi bakal error.
#include <stdio.h>
//SALAH
void f(int a)
{
	int a;
	printf("%d",a);
}

//BENAR
void f(int a)
{
	printf("%d",a);
}
