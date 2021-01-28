#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	float angka[25];
	int x,min=100,max=0;
	float tb=0,r=0,ta=0;
	char grade;
	srand(time(0));
	for(x=0;x<25;x++)
	{
		angka[x]=rand()%100;
		printf("%.0f ",angka[x]);
		if(angka[x]>max)
			max=angka[x];
		if(angka[x]<min)
			min=angka[x];
		r+=angka[x];
	}
	r/=(x);
	tb=(min+r)/2;
	ta=(max+r)/2;
	printf("\n");
	printf("Minimum\t\t = %d\n",min);
	printf("Tengah Bawah\t = %.3f\n",tb);
	printf("Rata rata\t = %.3f\n",r);
	printf("Tengah Atas\t = %.3f\n",ta);
	printf("Maksimum\t = %d\n",max);
	for(x=0;x<25;x++)
	{
		if(angka[x]>=ta)
			grade='A';
		else
			if(angka[x]>=r)
				grade='B';
			else
				if(angka[x]>=tb)
					grade='C';
				else
					grade='D';
		printf("%.0f[%c]  ",angka[x],grade);
	}
	return 0;
}
