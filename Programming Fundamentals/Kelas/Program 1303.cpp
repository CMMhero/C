//kalau void tidak ada return.
#include <stdio.h>
//SALAH
void product()
{
	int p,q,r,result;
	printf("Enter 3 integers: ");
	scanf("%d %d %d",&p,&q,&r);
	result=p*q*r;
	printf("Result = %d\n",result)
	return result;
}

//BENAR
int product()
{
	int p,q,r,result;
	printf("Enter 3 integers: ");
	scanf("%d %d %d",&p,&q,&r);
	result=p*q*r;
	printf("Result = %d\n",result)
	return result;
}

//atau
void product()
{
	int p,q,r,result;
	printf("Enter 3 integers: ");
	scanf("%d %d %d",&p,&q,&r);
	result=p*q*r;
	printf("Result = %d\n",result)
}
