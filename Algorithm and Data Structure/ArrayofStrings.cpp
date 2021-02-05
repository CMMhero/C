#include <stdio.h>

int main()
{
	char *cards[4]= {"Spades", "Clubs", "Heart", "Diamonds"};
	
	printf("%s\n",cards[1]);
	printf("%c\n",*(*(cards+1)+2));
	
	return 0;
}

