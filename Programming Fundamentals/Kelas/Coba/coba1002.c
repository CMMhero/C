#include <stdio.h>

//tipedata namafungsi (parameter)
int jumlah (int a, int b); // function protoype
void kurang (int x, int y);

int main ()
{
	int a=5, b=7, c;
	c = jumlah(a,b);
	kurang(a,b);
	return 0;
}

int jumlah (int a, int b) // function header
{
	int x=a+b;
	printf("Jumlah = %d\n",x);
	return 0;
}

void kurang (int x, int y) // function header
{
	int z=x-y;
	printf("Kurang = %d\n",z);
}
