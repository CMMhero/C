#include <stdio.h>
void periksa(int n, int *a, int *b)
{
	for(n;n>0;n/=10)
	{
		if((n%10)<5)
			*a+=1;
		else
			*b+=1;
	}
}
int main()
{
	int n,a=0,b=0;
	printf("Bilangan n = ");
	scanf("%d",&n);
	if(n>=1 && n<=99999999)
	{
		periksa(n,&a,&b);
		printf("Kelompok 1 : %d\n",a);
		printf("Kelompok 2 : %d\n",b);	
	}
	return 0;
}
