//Meteran Air
#include <stdio.h>
int main ()
{
	int a1,a2,a3,a4,x1,x2,x,t;	//a1-a4 tarif, x1,x2,x meteran, t tarif
	scanf("%d %d %d %d %d %d",&a1,&a2,&a3,&a4,&x1,&x2);
	if(x2>x1 && x2<=99999)
	{
		x=x2-x1;
		if (x<=10)
			t=x*a1;
		else
			if (x<=20)
				t=10*a1+((x-10)*a2);
			else
				if (x<=40)
		    		t=10*a1+10*a2+((x-20)*a3);
				else 
					t=10*a1+10*a2+20*a3+((x-40)*a4);
		printf("%d",t);
	}
	return 0;
}
