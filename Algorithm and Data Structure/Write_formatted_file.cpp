#include <stdio.h>

int main()
{
	int fprintf(FILE *fp, const char *format);
	
	char name[50]="Christopher Matthew Marvelio";
	char major[35]="Informatics";
	float gpa = 3.72;
	FILE *fp = fopen("data.txt", "w");
	fprintf(fp, "%s %s %f", name, major, gpa);
	fclose(fp);
	
	return 0;
}

