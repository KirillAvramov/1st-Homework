#include <stdio.h>

void swap (int* a, int* b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int main()
{
	int q, w;
	scanf ("%d %d", &q, &w);
	printf ("q = %d\tw = %d\n", q, w);
	swap (&q, &w);
	printf ("q = %d\tw = %d\n", q, w);
	return 0;
}
