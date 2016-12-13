#include <stdio.h>

int main()
{
	int k, i;
	k = 0;
	for (i = 0; i <= 999999; ++i)
		k = ((i%10 + (i/10)%10 + (i/100)%10) - (i/100000 + (i/10000)%10 + (i/1000)%10) == 0)? k+1 : k;
	printf("Счатливых билетов аж %d\n", k);
	return 0;
}
	
