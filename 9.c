#include <stdio.h>
#include <stdlib.h>

int main()
{
	int k = 0;
	scanf ("%d", &k);
	int *m = (int *) malloc(k * sizeof(int));
	for (int i = 0; i < k-1; ++i)
		m[i] = 0;
	m[0] = 1, m[1] = 1;
	for (int i = 2; i < k; ++i)
	{	
		int p = i;
		while (p < k-i && m[i] == 0)
		{
			p += i;
			m[p] = 1;
		}
	}
	for (int i = 0; i < k; ++i)
		if (m[i] == 0)
			printf("%d ", i);
	printf("\n");
  	free(m);
	return 0;
}

