#include <stdio.h>
#include <stdlib.h>

void swap (int* a, int* b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int main()
{
	int m, n;
	int* p;
	
	printf ("Длина первого отрезка:\n");
	scanf("%d", &m);
	printf ("Длина второго отрезка:\n");
	scanf("%d", &n);
	p = (int*) malloc ((m+n) * sizeof(int));
	
	printf ("Введите числа первого отрезка:\n");
	for (int i = 0; i < m; ++i)
		scanf("%d", &p[i]);
	printf ("Введите числа второго отрезка:\n");
	for (int i = m; i < m+n; ++i)
		scanf("%d", &p[i]);
	printf ("Получившийся массив:\n");
	for (int i = 0; i < m+n; ++i)
		printf("%d ", p[i]);
		
	printf ("Обработка массива...\nМеняем местами первый отрезок со вторым...\n");
	for (int i = 0; i < n; ++i)
	{
		int k = m+i;
		while (k > i)
		{
			swap (&p[k], &p[k-1]);
			--k;
		}
	}
	printf ("Клиент дозревает, будь готов!\nОтрезки поменялись местами, массив готов:\n");
	for (int i = 0; i < m+n; ++i)
		printf("%d ", p[i]);
	printf("\n");
	
	free (p);
	return 0;
}
