#include <stdio.h>

// kalo pakai counter
int main ()
{
	int a,i;
	for(a=20,i=1 ; i<=6 ; i++,a-=6)
		printf("%d ",a);
	return 0;
}

//kalau sentinel
//int main()
//{
//	int a;
//	for(a=20 ; a>=-10 ; a-=6)
//	printf("%d ",a);
//	return 0;
//}
