#include <stdio.h>
void isiarray(int arr[10])
{
	int i;
	for(i=0;i<10;i++)
		arr[i]=(i+1)*10;
}
int main()
{
	int i;
	int a[10]={0};
	isiarray(a);	//panggil fungsi untuk mengisi data ke dalam array
	//tampilkan isi arraynya
	for(i=0;i<10;i++)
		printf("a[%d] = %d\n",i,a[i]);
	return 0;
}
