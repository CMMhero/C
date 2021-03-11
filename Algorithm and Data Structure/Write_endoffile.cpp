#include <stdio.h>

struct student {
	char name[50];
	char major[35];
	float gpa;
};

int main()
{
	int i=0;
	struct student s[3];
	FILE *fp = fopen("data3.txt", "r");
	while(!feof(fp)) {
		fscanf(fp, "%[^#]#%[^#]#%f\n", s[i].name, s[i].major, &s[i].gpa);
		i++;
	}
	for(i=0;i<3;i++) {
		printf("%-20s%-15s%.2f\n", s[i].name, s[i].major, s[i].gpa);
	}
	
	return 0;
}

