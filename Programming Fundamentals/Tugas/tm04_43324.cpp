//Segi Empat
#include <stdio.h>
int main()
{
	int a,b,baris,kolom,spasi;
	scanf("%d %d",&a,&b);
	if (a>=2 && a<=100 && b>=0 && b<=50)
	{
		for(baris=1 ; baris<=a ; baris++)
		{
			for(spasi=1 ; spasi<=b ; spasi++)
				printf(" ");
			for(kolom=1 ; kolom<=a ; kolom++)
			{
				if(baris==kolom)
					printf("\\");
				else
					if(baris+kolom==a+1)
						printf("/");
					else
						printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
