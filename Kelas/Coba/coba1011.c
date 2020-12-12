#include <stdio.h>
#include <string.h>

int main ()
{
	int i,pjg;
	char kalimat[30];	//string adalah array of character. kalimat[0], kalimat[2], ..., kalimat[29]
	gets(kalimat);
	
	pjg = strlen(kalimat);
	printf("panjang kalimat = %d\n",strlen(kalimat));	//byk karakter
	kalimat[5]='\0';
	
	puts(kalimat);
	i = 0;
	while(i<pjg)
	{
		printf("%c ",kalimat[i]);
		i++;
	}
	
	return 0;
}

