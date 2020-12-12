#include <stdio.h>
int main()
{
	int a;
	int *b;
	b=NULL;	//ini deklarasi pointer
	a=5;
	b=&a;
	
	printf("var a ada di %X, isinya %d\n",&a,a);
	printf("var b ada di %X, isinya %X\n",&b,b);
	
	//a=15;
	*b=15;
	(*b)++;	//isi b ditambah 1, sehingga jadi 16
	*b++;	//alamat yang disimpan b bertambah sebanyak 4 byte
	//b=NULL;	//kalau dikasih NULL isinya akan 0
	printf("var a ada di %X, isinya %d\n",&a,a);
	printf("var b ada di %X, isinya %X\n",&b,b);
	
	return 0;
}
