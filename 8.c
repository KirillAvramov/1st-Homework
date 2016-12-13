#include <stdio.h>
#include <string.h>

int main()
{
	char s1[256];
	int lns;
	int cntr = 0, pos = 0;
	char s = 'a';
	printf ("Введите подстроку\n");
	scanf ("%s", s1);
	lns = strlen(s1);
	printf ("Введите строку, в которой будет идти поиск подстроки\n");
	s = getchar();
	do {
		if (s1[pos] == s)
			++pos;
		else
			pos = 0;
		if (pos == lns)
		{
			++cntr;
			pos = 0;
		}
		s = getchar();
	} while (s != '\n');
	printf ("Количество вхождений равно %d\n", cntr);
	return 0;
}
