#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
	char name[50];
	char major[35];
	float gpa;
	struct Student *next;
} *head, *tail, *curr;

void input(int *jumlah) {
	system("cls");
	char name[50];
	char major[35];
	float gpa;
	printf("  Insert student Information  \n");
	printf("------------------------------\n");
	printf("Name\t: ");
	scanf("%s", &name);fflush(stdin);
	printf("Major\t: ");
	scanf("%s", &major);fflush(stdin);
	printf("GPA\t: ");
	scanf("%f", &gpa);fflush(stdin);
	
	curr = (struct Student*)malloc(sizeof(struct Student));
	strcpy(curr->name, name);
	strcpy(curr->major, major);
	curr->gpa = gpa;
	curr->next = NULL;
	
	if(head == NULL) {
		head = tail = curr;
	} else {
		tail->next = curr;
		tail = curr;
	}
	printf("Inserting data\n");
	printf("New students added\n");
	printf("Press any key to continue\n");
	*jumlah += 1;
	getchar();
}

void show() {
	int i=1;
	system("cls");
	printf("                 List of Student Information                  \n");
	printf("--------------------------------------------------------------\n");
	printf("|No.|             Name             |      Major      |  GPA  |\n");
	printf("--------------------------------------------------------------\n");
	curr = head;
	
	if(head != NULL) {
		while(curr != NULL) {
			printf("|%d  | %-28s | %-15s | %.2f  |\n", i, curr->name, curr->major, curr->gpa);
			curr = curr->next;
			i++;
		}
	}
	getchar();
}

int main() {
	int jumlah=0;
	int pilihan=1;
	do
	{
		system("cls");
		printf("Welcome to simple studet database (%d/20)\n", jumlah);
		printf("1. Input new student\n");
		printf("2. Show all students\n");
		printf("3. Exit\n");
		printf("Choose: ");
		scanf("%d", &pilihan);fflush(stdin);
		
		switch(pilihan) {
			case 1: {
				if(jumlah!=20) {
					input(&jumlah);
				} else {
					printf("Database is full\n");
					printf("Press any key to continue");
					getchar();
				}
				break;
			}
			case 2:
				show();
				break;
		}
	}
	while(pilihan != 3);

	return 0;
}
