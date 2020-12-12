#include <stdio.h>
int main()
{
	int n[10],i,max=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
		if(n[i]>max)
			max=n[i];
	}
	printf("%d",max);
	return 0;
}
