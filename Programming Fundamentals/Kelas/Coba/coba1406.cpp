#include <stdio.h>
int main()
{
	int a[5],i;
	a[0]=11;
	a[4]=22;
	scanf("%d",&a[2]);
	
	for(i=0;i<5;i++)
		printf("a[%d] = %d\n",i,a[i]);
	return 0;
}

