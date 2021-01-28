//setiap ada fungsi yg mengembalikan nilai, elsenya harus ada return.
#include <stdio.h>
//SALAH
int sum(int n)
{
	if(n==0)
		return 0;
	else
		n+sum(n-1);
}

//BENAR
int sum(int n)
{
	if(n==0)
		return 0;
	else
		return n+sum(n-1);
}
