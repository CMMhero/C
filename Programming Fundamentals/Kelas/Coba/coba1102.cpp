//ini contoh penting

#include <stdio.h>

int main ()
{
	int a;
	a = 15;
//	if(0)
//		printf("a > 10");
//	else
//		printf("a <=10");
	
	while(a>=0)	//while(1)
	{
		printf("%d ",a);
		a = a-1;
		//if(a==0)		// not recommended, walau kadang bermanfaat
			//	break;
	}

	return 0;
}

