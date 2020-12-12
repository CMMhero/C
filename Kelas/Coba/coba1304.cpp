//call by value
//square1 --> tanpa return, jadi return type adalah void (nilai a di main tidak berubah)
//square --> ada return int, jadi nilai a di main terupdate
#include <stdio.h>

void square1(int a)
{
	a*=a;
	printf("a = %d\n",a);
}

int square(int a)
{
	a*=a;
	printf("a = %d\n",a);
	return a;
}

int main()
{
	int a=5;
	square1(a);
	printf("a hasil square1 = %d\n",a);
	a=square(a);
	printf("a hasil square = %d\n",a);
	return 0;
}
