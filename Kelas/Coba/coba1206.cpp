//rekursif --> function yang memanggil dirinya sendiri
#include <stdio.h>

int tampil(int i)
{
	if(i==0)
		return 0;
	printf("%d\n",i);
	tampil(i-1);
}

int tampil1(int i)
{
	if(i==0)
		return 0;
	tampil1(i-1);
	printf("%d\n",i);
}
/* Cara kerja tampil1, simulasi i=5
tampil1(5)...belum print
tampil1(4)...belum print
tampil1(3)...belum print
tampil1(2)...belum print
tampil1(1)...belum print
tampil1(0)...return
tampil1(1)...print 1
tampil1(2)...print 2
tampil1(3)...print 3
tampil1(4)...print 4
tampil1(5)...print 5
selesai
*/

int main ()
{
	int i;
	scanf("%d",&i);
	tampil(i);
	printf("\n");
	tampil1(i);

	return 0;
}

