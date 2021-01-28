//call by reference
// & = alamat dari...
// * = lihat isi alamat...
//call by value = main hanya kirim ISI variabel ke function, function TIDAK BISA mengubah isi variabel di main
//call by value hanya bisa mengembalikan 1 nilai saja
//call by reference = main mengirim ALAMAT variabel ke function, sehingga function BISA mengubah isi variabel di main
//call by reference bisa diberikan banyak alamat, sehingga secara logika dapat mengupdate isi beberapa variabel
#include <stdio.h>

void square(int *a)
{
	*a*=*a;
	printf("a = %d\n",*a);
}

int main()
{
	int a=5;
	square(&a);
	printf("a hasil square = %d\n",a);
	return 0;
}
