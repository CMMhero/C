//call by reference
//local vs global variabel
#include <stdio.h>
int apa=100;
void ubahdata(int *aa,int *bb,int *cc)
{
	*aa*=10;
	*bb*=10;
	*cc*=10;
	printf("apa = %d\n",apa);
//	printf("itu = %d\n",itu);	//tidak dikenal, karena itu dideklarasikan setelah, bukan sebelum
}
int itu=50;
int main()
{
	int a,b,c;
	a=5;
	b=7;
	c=9;
	ubahdata(&a,&b,&c);	//setiap isi variabel dikalikan 10
	printf("a ada di %x. isinya = %d\n",&a,a);
	printf("b ada di %x. isinya = %d\n",&b,b);
	printf("c ada di %x. isinya = %d\n",&c,c);
	printf("apa = %d\n",apa);
	printf("itu = %d\n",itu);
	
	return 0;
}
