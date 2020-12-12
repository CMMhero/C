//Magic
#include <stdio.h>
int main ()
{
	int n,baris,kolom;
	int jd,jb,jk;
	scanf("%d",&n);
	if(n>=0 && n<=10)
	{
		int ms[n][n];
		for(baris=0 ; baris<n ; baris++)
		{
			for(kolom=0 ; kolom<n ; kolom++)
				scanf("%d",&ms[baris][kolom]);
		}
		//Cek Diagonal
		jd=0;
		for(baris=0; baris<n ; baris++)
		{
	    	for(kolom=0 ; kolom<n ; kolom++)
	    	{
	        	if(baris==kolom)
	            	jd+=ms[baris][kolom];
	        }
	    }
	    //Cek Baris
	    for(baris=0 ; baris<n ; baris++)
	    {
	    	jb=0;
	        for(kolom=0 ; kolom<n ; kolom++)
	        	jb+=ms[baris][kolom];
	    }
	    //Cek Kolom
	    for(baris=0 ; baris<n ; baris++)
	    {
	    	jk=0;
	    	for(kolom=0 ; kolom<n ; kolom++)
	    		jk+=ms[kolom][baris];
	    }
		if(jd==jb && jd==jk)
			printf("magic square");
		else
			printf("bukan magic square");
	}
	return 0;
}
