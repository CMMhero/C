#include <stdio.h>
#include <conio.h>

int main ()
{
	char huruf;
	
	scanf("%c",&huruf);
	//huruf = getchar(); //perlu enter
	//huruf = getch(); //tidak perlu enter
	//huruf = getche();
	
	//printf("hurufnya = %c",huruf);
	printf("hurufnya adalah =");
	putch(huruf);
	
	return 0;
}

