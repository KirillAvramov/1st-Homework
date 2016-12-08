#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr;
    int q = 0;  // Счетчик нулевых эл-ов в массиве
    printf ("Длина массива: ");
    scanf ("%d", &n); 
    arr=(int *) malloc (n * sizeof(int));
    printf ("Введите элементы массива: ");
    for(int i  = 0; i < n; ++i)
    {
        scanf ("%d", &a[i]);
        if (arr [i] == 0)
            ++q;
    }

    printf("Количество нулевых элементов в массиве равно %d.", k);

    return 0;
}
