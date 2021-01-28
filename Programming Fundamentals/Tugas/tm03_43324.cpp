//Segitiga Sama Sisi
#include <stdio.h>
int main()
{
	int n,baris,spasi,v;
	scanf("%d",&n);
	if(n<=1000 && n>=1)
	{
		for(baris=1 ; baris<=n ; baris++)
		{
			for(spasi=1 ; spasi<=n-baris ; spasi++)
				printf(" ");
			for(v=1 ; v<=baris ; v++)
				printf("* ");
			printf("\n");
		}
	}
	return 0;
}
