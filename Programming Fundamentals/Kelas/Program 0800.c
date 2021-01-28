/*

Soal
Buatlah sebuah program untuk memasukkan 2 buah bilangan dan tampilkan jumlahnya

Lang
prompt,get -> scanf
display print -> printf

Format tampilan bilangan:
%d -> integer
%f -> float
%c -> char
%s -> string

Semua huruf kecil

printf bisa diformat, scanf tidak bisa diformat

*/


#include <stdio.h>
int main ()
{
	
	int a,b,c;						//declare int a,b,c
	printf("Masukkan angka 1: ");
	scanf("%d",&a);					//prompt a, get a
	printf("Masukkan angka 2: ");
	scanf("%d",&b);					//prompt b, get b
	c = a+b;						//set c = a + b
	printf("Jumlah = %d",c);		//display "Jumlah = ", c
	
	return 0;
}
