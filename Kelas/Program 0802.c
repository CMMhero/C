/*

Buatlah sebuah program untuk memasukkan 5 buah bilangan dan tampilkan bilangan tsb setelah dikalikan 2
input: 1 2 3 4 5 
output: 2 4 6 8 10

*/

#include <stdio.h>
int main ()
{
	int bil, ctr;
	ctr = 1;
	while (ctr<=5)
	{
		scanf("%d",&bil);
		printf("sekarang sedang memproses bil = %d\n",bil);
		printf("%d ",bil*2);
		ctr = ctr+1;
	}

	return 0;
}
