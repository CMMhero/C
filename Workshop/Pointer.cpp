#include <stdio.h>

int main() {
	//POINTER
	// * artinya "isi dari"
	// & artiya "alamat dari"
	
	int angka = 100;
	int *ptr;
	
	//menampung alamat angka ke dalam ptr
	ptr = &angka;
	
	printf("Isi dari angka: %d\n", angka);
	printf("Alamat dari angka: %d\n", &angka);
	printf("Isi dari ptr: %d\n", ptr);
	printf("Isi dari *ptr: %d\n", *ptr);
	printf("Alamat dari ptr: %d\n", &ptr);
	
	//Isi variabel angka dapat diubah menggunakan *ptr
	*ptr = 70;
	printf("\nIsi dari angka: %d\n", angka);
	
	return 0;
}

