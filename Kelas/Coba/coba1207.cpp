#include <stdio.h>

//tampilkan bilangan genap dari 0 sampai 20
int main ()
{
	int i;
	
	for(i=0;i<=20;i+=2) 
	{
		printf("%d ",i);
	}
	
//	i=0;
//	while(1)
//	{
//		if(i%2==0)
//			printf("%d ",i);
//		i++;
//		if(i%2==1)
//			continue;
//		if (i>20)
//			break;
//	}

	return 0;
}

