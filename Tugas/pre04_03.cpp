#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int x, oo=0,oe=0,eo=0,ee=0;
	int n[50];
	srand(time(0));
	for(x=1 ; x<=50 ; x++)
	{
		n[x]=rand();
		printf("%5d ",n[x]);
		if(n[x]%2==0)
		{
			while(n[x]>=10)
				n[x]/=10;
			if(n[x]%2==0)
				ee+=1;
			else
				oe+=1;
		}
		else
		{
			while(n[x]>=10)
				n[x]/=10;
			if(n[x]%2==0)
				eo+=1;
			else
				oo+=1;
		}
	}
	printf("\nIndex\\Isi   Ganjil   Genap   Total\n");
	printf("Ganjil%12d%8d%8d\n",oo,oe,oo+oe);
	printf("Genap %12d%8d%8d\n",eo,ee,eo+ee);
	printf("Total %12d%8d\n",oo+eo,oe+ee);
	return 0;
}
