//Receh
#include <stdio.h>
void bulat(int *kembali)	//Modul pembulatan kembalian
{
	if(*kembali%25!=0)
		*kembali+=(25-(*kembali%25));
}
void hitung(int a,int b,int *kembali,int receh[8],int xreceh[8])	//Modul penghitungan kembalian
{
	//Hitung kembalian (RAW)
	*kembali=b-a;
	//Kembalian dibulatkan
	bulat(&*kembali);
	//Penghitungan jumlah kembalian per lembar uang/koin
	int i,z=*kembali;
	for(i=0 ; i<8 ; i++)
	{
		if(z>=receh[i])
			xreceh[i]=(z/receh[i]);
		z%=receh[i];
	}
}
int main()
{
	int a,b,kembali,i;
	int receh[8]={50000,20000,10000,1000,500,100,50,25};
	int xreceh[8]={0};
	scanf("%d %d",&a,&b);
	if(a>0 && b>a)
	{
		hitung(a,b,&kembali,receh,xreceh);
		printf("%d\n",kembali);
		for(i=0 ; i<8 ; i++)
		{
			if(xreceh[i]>0)
				printf("%d %d\n",xreceh[i],receh[i]);
		}
	}
	return 0;
}
