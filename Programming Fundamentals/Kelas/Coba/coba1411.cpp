//Array 2D
#include <stdio.h>
int main()
{
	int i,j,ctr=1,a[5][5]={0};
	//Isi array
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			a[i][j]=ctr;
			ctr++;
		}	
	}
	//Print array
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%3d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
