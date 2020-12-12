#include <stdio.h>

int main ()
{
	const float PI=3.14159;
	int r;
	printf("Masukkan nilai r: ");
	scanf("%d",&r);
	
	printf("Radius: %d\n",r);
	printf("Diameter: %d\n",2*r);
	printf("Circumference: %f\n",2*r*PI);
	printf("Area: %f\n",PI*(r*r));
	
	return 0;
}


//Radius: 10
//Diameter = 20
//Circumference = 62.831800
//Area = 314.159000
