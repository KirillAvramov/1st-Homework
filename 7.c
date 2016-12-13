#include <stdio.h>

int main()
{
	int ch, cntr;
	ch = cntr = 0;
	printf ("Введите строку\n");
	do {
		ch = getchar();
		switch (ch)
		{
			case '(': 
				++cntr;
				break;
			case ')': 
				--cntr;
				break;
			default:
				break;
		}
	} while (ch != '\n');
	if (!cntr)
		printf ("Баланс соблюден\n");
	else
		printf ("Баланс нарушен\n");
	return 0;
}
