#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a[5],i;
	srand(time(0));	//ini seed random.. untuk hindari pseudorandom
	for(i=0;i<5;i++)
		a[i]=rand()%100;	//random max 2 digit
		//scanf("%d",&a[i]);
	for(i=0;i<5;i++)
		printf("a[%d] = %d\n",i,a[i]);
	return 0;
}

