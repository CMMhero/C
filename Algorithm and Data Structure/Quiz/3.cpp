#include <stdio.h>
#include <string.h>

int main()
{
	char string1[10], string2[10], string3[10];
	int sama,x;
	scanf("%s", &string1);
	scanf("%s", &string2);
	
	for(x=0; x<10; x++)
	{
		if(string1[x]==string2[x])
			sama+=1;
		else
			break;
	}
	strncpy(string3, string1, sama);
	printf("%s", string3);
	return 0;
}

