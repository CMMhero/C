#include <stdio.h>
int main()
{
	int a,*b;	//tipe data a=integer, b=pointer to integer, *b=integer
	float x,*y;	//tipe data x=float, y=pointer to float, *y=integer
	a=10;
	x=5.5;
	b=&a;	//pointer to integer
	y=&x;	//pointer to float
//	b=&x;	//error (tidak bisa karena type mismatch -> int menyimpan alamat float)
	printf("a = %d\n",a);
	printf("x = %f\n",x);
	*b=20;
//	b=20;	//error (yg kiri *int yg kanan int)
	*y=6;
	printf("a = %d\n",a);
	printf("*b = %d\n",*b);
	printf("x = %f\n",x);
	printf("*y = %f\n",*y);
	return 0;
}

