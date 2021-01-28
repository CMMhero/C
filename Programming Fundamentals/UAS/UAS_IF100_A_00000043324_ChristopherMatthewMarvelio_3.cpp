#include <stdio.h>
void check(char kal[],int *ajaib)
{
	int x,a=0,i=0,u=0,e=0,o=0;
	for(x=0;x<kal[x];x++)
	{
		if(kal[x]=='a')
			a=1;
		else
			if(kal[x]=='i')
				i=1;
			else
				if(kal[x]=='u')
					u=1;
				else
					if(kal[x]=='e')
						e=1;
					else
						if(kal[x]=='o')
							o=1;
	}
	*ajaib+=a+i+u+e+o;
}
int main()
{
	char kal[255];
	int ajaib;
	scanf("%[^\n]",&kal);
	check(kal,&ajaib);
	if(ajaib==1)
		printf("Ajaib!");
	else
		printf("Tidak Ajaib!.");
	return 0;
}
