#include <stdio.h>
#include <stdlib.h>

struct data {
	int angka;
	struct data *next;
} *head, *tail, *curr;

void pushTail(int angka) {
	//INISIALISASI DATA
	//malloc : Memory Allocation
	curr = (struct data*)malloc(sizeof(struct data));
	curr->angka = angka;
	curr->next = NULL;
	
	//LOGIC
	if(head == NULL) {
		//tidak ada data
		head = tail = curr;
	} else {
		//jika ada data
		tail->next = curr;
		tail = curr;
	}
}

void pop() {
	if(head == NULL) {
		//tidak ada data
		printf("TIDAK ADA DATA!");
	} else {
		curr = head;
		head = curr->next;
		free(curr);
		printf("Data sudah di hapus");
	}
	getchar();
}

void view() {
	curr = head;
	
	if(head != NULL) {
		while(curr != NULL) {
			printf("%d -> ", curr->angka);
			curr = curr->next;
		}
	} else {
		//kalau tidak ada data
		printf("TIDAK ADA DATA!");
	}
	getchar();
}

int main() {
	int menu;
	int angka;
	
	do {
		system("cls");
		printf("MENU SINGLE LINK LIST\n\n");
		printf("1. Push Data\n");	//Masukin data
		printf("2. Pop Data\n");	//Hapus data
		printf("3. View\n");
		printf("4. Exit\n");
		printf("Choose >> ");
		scanf("%d", &menu);fflush(stdin);
		
		switch(menu) {
			case 1:
				printf("Masukkan Angka : ");
				scanf("%d", &angka);fflush(stdin);
				pushTail(angka);
				break;
			case 2:
				pop();
				break;
			case 3:
				view();
				break;
		}
	} while(menu != 4);
	
	return 0;
}

