#include <stdio.h>

//tipedata namafungsi (parameter)
int jumlah (int a, int b); // function protoype
int kurang (int x, int y);

int main ()
{
	int a=5, b=7, c;
	c = jumlah(a,b);
	printf("Jumlah= %d\n",c);
	c = kurang(a,b);
	printf("Kurang= %d\n",c);
	return 0;
}

int kurang (int x, int y) // function header
{
	int z=x-y;
	return z;
}

int jumlah (int a, int b) // function header
{
	int x=a+b;
	return x;
}
