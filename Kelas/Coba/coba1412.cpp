//Array 2D
#include <stdio.h>
void isiarray(int a[5][5])
{
	int i,j,ctr=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			a[i][j]=ctr;
			ctr++;
		}	
	}
}
void cetakarray(int a[5][5])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%3d ",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int i,j,ctr,a[5][5]={0};
	//isi array
	isiarray(a);
	//print array
	cetakarray(a);
	return 0;
}
