#include <stdio.h>

int main()
{
   int a = 0, b = 0, q = 0, s = 0;
   printf ("Введите a и b:\n");
   scanf("%d %d", &a, &b);
  
   if (a < 0)
   {
   	a = -a;
	++s;
   }

   if (b < 0)
   {
   	b = -b;
	++s;
   }
	
   while (a >= b)
   {
       a = a - b;
       q++;
   }
   
   if (s == 1)
	s = -1;
   else
	s = 1;
   printf("Частное равно: %d\n", q*s);

   return 0;
}
