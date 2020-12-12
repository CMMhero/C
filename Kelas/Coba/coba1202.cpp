#include <stdio.h>

int main ()
{
	int ctr,lim;
	lim=8;

//	--DO WHILE--
//	ctr=1;
//	do
//	{
//		printf("%d\n",ctr);
//		ctr++;
//	}while (ctr<=lim);

//	--WHILE--
//	ctr=1;
//	while(ctr<=lim)
//	{
//		printf("%d\n",ctr);
//		ctr++;
//	}

//	--FOR--
	for(ctr=1;ctr<=lim;ctr++)
	{
		printf("%d\n",ctr);
	}
	
//	--FOR aneh--
//	ctr=1;
//	for(;ctr<=lim;)
//	{
//		printf("%d\n",ctr++);
//	}
	
//	for(i=10,ctr=1 ; ctr<=lim && i>7; i--)
//	{
//		printf("%d",i);
//	}
	
	return 0;
}

