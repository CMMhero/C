#include <stdio.h>

int main ()
{
	int n,baris,kolom;
	scanf("%d",&n);
	
	for(baris=1 ; baris<=n ; baris++)
	{
		for(kolom=1 ; kolom<=n ; kolom++)
		{
			if(baris==1 || kolom==1 || baris==n || kolom==n)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}

