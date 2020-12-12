//Recursive Semua
#include <stdio.h>
float fact(int n)	//Modul faktorial
{
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}
float kali(int n,int m)	//Modul Perkalian
{
	if(m==0)
		return 1;
	else
		return n*kali(n,m-1);
}
int main()
{
	int n,m;
	float a,b,x;
	scanf("%d",&n);
	if(n>=1)
	{
		for(; n>0 ; n--)
		{
			m=n;
			a=fact(n);
			b=kali(n,m);
			x+=(a/b);
		}
		printf("%f",x);
	}
	return 0;
}
