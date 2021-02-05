#include <stdio.h>

int main()
{
	int x=0, index;
	int n[5];
	for(x=0; x<5; x++)
		scanf("%d", &n[x]);
	printf("Index : ");
	scanf("%d", &index);
	printf("Nilai : ");
	printf("%d", n[index]);
	
	return 0;
}

