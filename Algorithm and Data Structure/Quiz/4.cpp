#include <stdio.h>

int main()
{
	int n,baris,kolom;
	scanf("%d",&n);
	if(n%2!=0 && n>0)
	{
		for(baris=0; baris<n; baris++)
		{
			for(kolom=0; kolom<n; kolom++)
			{
				if(baris==0 || kolom==0)
					printf("* ");
				else if(baris==n-1 || kolom==n-1)
					printf("* ");
				else if(baris==n/2 || kolom==n/2)
					printf("* ");
				else
					printf("  ");
			}
			printf("\n");
		}
	}
	return 0;
}

