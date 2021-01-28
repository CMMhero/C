#include <stdio.h>

int main ()
{
	int i,j,awal,akhir,fact;
	scanf("%d %d",&awal,&akhir);
	for(i=awal; i<=akhir; i++)
	{
		printf("%d! = ",i);
		fact=1;
		for(j=2;j<=i;j++)
			fact*=j;
		printf("%d\n",fact);
	}
	return 0;
}

