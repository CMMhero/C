#include <stdio.h>
int main ()
{
	int x,y; 
	x = 5;					//00000101 
	y = 3;					//00000011
	printf("%d\n",x&y);		//00000001
	printf("%d\n",x|y);		//00000111
	printf("%d\n",x^y);		//00000110
	printf("%d\n",~y);		//00000100 -> jadi minus
	printf("%d\n",~x);		//00001010 -> jadi minus
	printf("%d\n",y<<2);	//00001100 -> geser kiri 2	
	printf("%d\n",8>>2);	//00000010 -> geser kanan 2
	 
	return 0;
}
