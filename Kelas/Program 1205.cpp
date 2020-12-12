#include <stdio.h>

int main()
{
	int i,bil;
	
	i=1;
	bil=19;
	while(i<=5)
	{
		printf("%d ",bil);
		bil = bil+9-i;
		i++;
	}
	
//	for(a=19,i=9 ; a<=45 ; i--,a+=i)
//		printf("%d ",a);

	return 0;
}





