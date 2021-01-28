#include <stdio.h>
int panjangs(char kal[25])
{
	int i;
	while(kal[i]!='\0')
	{
		i++;
	}
	return i;
}
int main()
{
	int i;
	char a[25];	//ini string
	gets(a);	//pasti paling akhir '\0'

	//strlen versi sendiri
	i=panjangs(a);
	printf("panjang string = %d\n",i);
	
	//tampilkan isi arraynya
	for(i=0;i<25;i++)
		printf("a[%d] = %c\n",i,a[i]);
	return 0;
}

