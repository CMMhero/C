//Recursive Desimal ke Biner
#include <stdio.h>
int biner(int a)	//Modul biner
{
	if(a==0)
		return 0;
	else
		biner(a/2);
		printf("%d",a%2);
}
int main()
{
	int a;
	scanf("%d",&a);
	if(a>=0 && a<=1000000)
		a=biner(a);
	return 0;
}
