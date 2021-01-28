#include <stdio.h>
int main()
{
	int x,a=0,b=0,attempt;
	char pass[30],pass1[30];
	printf("Create Password = ");
	scanf("%s",&pass);
	for(x=0 ; pass[x]!='\0' ; x++)
		a+=pass[x];
	if(x<=30)
	{
		printf("Congratulation, Password has been created\n");
		for(attempt=3;attempt>0;attempt--)
		{
			b=0;
			printf("Please enter a password to login : ");
			scanf("%s",&pass1);
			for(x=0 ; pass1[x]!='\0' ; x++)
				b+=pass1[x];
			if(a==b)
			{
				printf("Congratulation, You are logged in\n");
				attempt=1;
			}
			else
			{
				printf("Sorry, Wrong Password, you have remaining %d attempt(s)\n",attempt-1);
				if(attempt==1)
					printf("You are blocked");
			}
		}
	}
	else
	return 0;
}
