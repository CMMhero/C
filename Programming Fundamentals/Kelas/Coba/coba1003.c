#include <stdio.h>

int main ()
{
	int a,b,c,jdata,jkar;
	jdata = scanf("%d %d %d",&a,&b,&c);
	printf("jdata = %d, datanya adalah %d %d %d\n",jdata,a,b,c);
	jkar = printf("Selamat");
	printf("\njumlah karakter = %d",jkar);
	return 0;
}

//prototype scanf ==> int scanf(format, variable);
//prototype printf ==> int printf(format, variable);


