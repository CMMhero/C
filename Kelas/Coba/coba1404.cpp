//call by reference di C (selanjutnya disebut call by pointer di C++)

#include <stdio.h>
void jumlahkali(int x,int y,int *jum,int *kali)
{
	*jum=x+y;
	*kali=x*y;
}
int main()
{
	int a,b,jum,kali;
	
	a=5;
	b=10;
	jumlahkali(a,b,&jum,&kali);
	printf("jumlah = %d\n",jum);
	printf("kali = %d\n",kali);
	return 0;
}

