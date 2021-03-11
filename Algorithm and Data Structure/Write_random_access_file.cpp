#include <stdio.h>

int main()
{
	FILE *fp;
	char str[] = "Algorithm and Data Structure";
	fp = fopen("rafile.txt", "w");
	fwrite(str, sizeof(str), 1, fp);
	fclose(fp);
	
	return 0;
}

