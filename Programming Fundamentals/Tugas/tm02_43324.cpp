//Cek Segitiga
#include <stdio.h>
#include <math.h>
int main()
{
	int x1,y1,x2,y2,x3,y3,a,b,c;
	scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
	a=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	b=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
	c=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
	if(a<b+c || b<a+c || c<a+b)
		printf("bisa membentuk segitiga");
	else
		printf("tidak bisa membentuk segitiga");
	return 0;
}
