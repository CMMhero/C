#include <stdio.h>
#include <string.h>

int main() {
	//STRUCT
	//adalah variabel yang meyimpan data yang sejenis maupun tidak sejenis
	//sejenis berkaitan dengan relasi data dalam struct, dapat berbeda tipe data
	//contoh: Buku -> title, author, harga, publisher
	
	int angka;
	
	struct Book {
		char title[50];
		int price;
	};
	
	struct Book buku1;
	
	strcpy(buku1.title, "C Programming");
	buku1.price = 50000;
	
	printf("Judul Buku 1: %s\n", buku1.title);
	printf("Harga Buku 1: %d\n", buku1.price);
	
	return 0;
}

