#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

typedef struct Item {
  int harga;
  char nama[25];
	int jumlah;
	int total;
  struct Item *next;
} Item;

Item *head, *node;

void input() {
	char nama[25];
	int harga;
	int jumlah;
	int diskon;
	int total;

	printf("Nama produk   : "); scanf("%s", &nama); fflush(stdin);
	printf("Harga produk  : "); scanf("%d", &harga); fflush(stdin);
	printf("Jumlah produk : "); scanf("%d", &jumlah); fflush(stdin);
	printf("Diskon (%)    : "); scanf("%d", &diskon); fflush(stdin);

	total = harga*jumlah*((100-diskon)/100);

	if(head == NULL) {
		head->harga = harga;
		strcpy(head->nama, nama);
		head->jumlah = jumlah;
		head->total = total;
		node = head;
		head->next = NULL;
	} else {

	}
	getchar();

}

void hapus() {

}

void list() {
	int i;
	Item *temp;
	temp = head;
	while(temp != NULL) {
		printf("|%-3d| %-11s | %-8d | %-2d | %-10d |\n", i, temp->nama, temp->harga, temp->jumlah, temp->total);
		temp = temp->next;
		i++;
	}
}

int kembalian() {

}

void cetak() {

}

int main() {
  int i, pilihan;
	printf("===========================\n");
  printf("|    WELCOME TO C-MART    |\n");
	printf("===========================\n");
  getchar();
  do {
     system("cls");
    printf("-------------------------\n");
    printf("           MENU          \n");
		printf("-------------------------\n");
    printf("1. Input Produk\n");
    printf("2. Hapus Produk\n");
    printf("3. List Produk\n");
    printf("4. Cetak Struk\n");
    printf("0. Exit Program\n\n");
    printf("Pilihan :");
    scanf("%d", &pilihan); fflush(stdin);
    
    switch(pilihan) {
      case 0: {
        break;
      }
      case 1: {
        input();
				break;
      }
      case 2: {
        break;
      }
      case 3: {
				list();
        break;
      }
      case 4: {
        break;
      }
      default: {
        printf("Pilihan invalid !\n");
				getchar();
				getchar();
        break;
      }
    }
  } while (pilihan != 0);

  return 0;
}
