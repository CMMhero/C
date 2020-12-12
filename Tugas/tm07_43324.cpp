//Sederhana
#include <stdio.h>
void sederhana(int *a,int *b,int x)	//Modul penyederhanaan pecahan
{
	for(;x>0;x--)
		if(*b%x==0 && *a%x==0)
		{
			*b=*b/x;
			*a=*a/x;
		}
}
int main ()
{
	int a,b,x;
	scanf("%d/%d",&a,&b);
	if(a<=b && a>0 && b>0 && a<=1000000 && b<=1000000)
	{
		x=a;
		sederhana(&a,&b,x);
		if(a/b==1)
			printf("1");
		else
			printf("%d/%d",a,b);
	}
	return 0;
}
