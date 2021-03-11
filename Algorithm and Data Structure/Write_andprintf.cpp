#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp;
	char c[] = "Algorithm and Data Structures";
	char buffer[100];
	
	fp = fopen("printf.txt", "w+");
	fwrite(c, strlen(c)+1, 1, fp);

	fseek(fp, 0, SEEK_SET);
	fread(buffer, strlen(c)+1, 1, fp);
	printf("%s\n", buffer);
	
	fclose(fp);
	
	return 0;
}

