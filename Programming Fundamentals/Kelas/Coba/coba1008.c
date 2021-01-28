#include <stdio.h>
#include <string.h>

int main ()
{
	int i;
	char kalimat[30];	//string adalah array of character. kalimat[0], kalimat[2], ..., kalimat[29]
	gets(kalimat);
	//puts(kalimat);
	printf("panjang kalimat = %d\n",strlen(kalimat));	//byk karakter
	//for(i=0;i<strlen(kalimat);i++)
	i=0;
	while(i<strlen(kalimat))
	{
		printf("%c",kalimat[i]);
		i++;
	}
// Kalau mau print kebalik
//	i=strlen(kalimat)-1;
//	while(i>=0)
//	{
//		printf("%c",kalimat[i]);
//		i--;
//	}
	
	return 0;
}

