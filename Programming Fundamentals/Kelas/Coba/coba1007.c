#include <stdio.h>

int main ()
{
	int a;
	char b;
	
	scanf("%d",&a);
	fflush(stdin);	//membersihkan memory keyboard stdin (standard input) dalam hal ini keyboard
	scanf("%c",&b);
	//scanf("%d %c",&a,&b);
	
	printf("%d ... %c",a,b);
	
	return 0;
}

