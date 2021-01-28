#include <stdio.h>
#include <limits.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int a[15],i,min=INT_MAX,max=INT_MIN;
	srand(time(0));
	for(i=0;i<15;i++)
		a[i]=rand()%100;
	for(i=0;i<15;i++)
	{
		if(a[i]<min)
			min=a[i];
		if(a[i]>max)
			max=a[i];
		printf("a[%d] = %d\n",i,a[i]);
	}
	
	printf("min = %d, max = %d\n",min,max);
	return 0;
}

