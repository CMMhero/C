#include <stdio.h>

int main ()
{
	char name[30], id[15];
	scanf("%[^#]#%[^\n]",&name,&id);
	printf("ID: %s\nName: %s",id,name);

	return 0;
}

//Input: Christopher Matthew Marvelio#00000043324
