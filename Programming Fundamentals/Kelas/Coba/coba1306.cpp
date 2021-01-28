//call by reference
#include <stdio.h>

void ubahdata(int *aa,int *bb,int *cc)
{
	*aa*=10;
	*bb*=10;
	*cc*=10;
	printf("aa ada di %x. isinya = %X. datanya = %d\n",&aa,aa,*aa);
	printf("bb ada di %x. isinya = %X. datanya = %d\n",&bb,bb,*bb);
	printf("cc ada di %x. isinya = %X. datanya = %d\n",&cc,cc,*cc);
}

int main()
{
	int a,b,c;
	a=5;
	b=7;
	c=9;
	printf("a ada di %x. isinya = %d\n",&a,a);
	printf("b ada di %x. isinya = %d\n",&b,b);
	printf("c ada di %x. isinya = %d\n",&c,c);
	ubahdata(&a,&b,&c);	//setiap isi variabel dikalikan 10
	printf("a ada di %x. isinya = %d\n",&a,a);
	printf("b ada di %x. isinya = %d\n",&b,b);
	printf("c ada di %x. isinya = %d\n",&c,c);
	return 0;
}
