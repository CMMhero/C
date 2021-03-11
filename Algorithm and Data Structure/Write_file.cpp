#include <stdio.h>

int main()
{
	char data[100] = "Hello World";
	FILE *fp = fopen("file.txt", "w");
	fputs(data,fp);
	fclose(fp);
	
	return 0;
}

