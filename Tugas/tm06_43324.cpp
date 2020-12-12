//Keyboard Rusak
#include <stdio.h>
int main()
{
	int x;
	char txt[255];
	scanf("%[^\n]",&txt);
	for(x=0 ; txt[x]!='\0' ; x++)
	{
		//Huruf besar dikonversi ke huruf kecil
		if(txt[x]>='A' && txt[x]<='Z')
			txt[x]+=32;
		//Awal Kalimat
		if(x==0 && (txt[x]>='a' && txt[x]<='z'))
			txt[x]-=32;
		//Setelah tanda titik
		if(txt[x-1]=='.' && (txt[x]>='a' && txt[x]<='z'))
			txt[x]-=32;
		if((txt[x-2]=='.' && txt[x-1]==' ') && (txt[x]>='a' && txt[x]<='z'))
			txt[x]-=32;
	}
	printf("%s",txt);
	return 0;
}
