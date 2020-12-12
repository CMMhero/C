#include <stdio.h>

int maximum(int a, int b, int c);

int main()
{
	int maxNumber,aa,bb,cc;
	scanf("%d %d %d",&aa,&bb,&cc);
	maxNumber=maximum(aa,bb,cc);
	printf("%d\n",maxNumber);
	return 0;
}

int maximum(int a, int b, int c)
{
	int max = a;
	if(b>max)
		max=b;
	if(c>max)
		max=c;
	return max;
}
