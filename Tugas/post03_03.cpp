#include <stdio.h>
int main ()
{
	int n,baris,kolom;
	printf("n : ");
	scanf("%d",&n);
	while (n>0)
	{
		for(baris=1 ; baris<=n ; baris++)
		{
			for(kolom=1 ; kolom<=n ; kolom++)
			{
				if(baris==kolom || (baris+kolom==(n+1)))
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
		printf("n : ");
		scanf("%d",&n);
	}
	return 0;
}
