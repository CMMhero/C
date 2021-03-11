#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp;
	char str[] = "Programming Fundementals";
	
	fp = fopen("fileeseekset.txt", "w+");
	fwrite(str, sizeof(str), 1, fp);
	
	fseek(fp, 7, SEEK_SET);
	
	strcpy(str, "Algorithm and Data Structures");
	fwrite(str, sizeof(str), 1, fp);
	fclose(fp);
	
	return 0;
}

