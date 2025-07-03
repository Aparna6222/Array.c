#include <stdio.h>
int main()
{
    int n, i, a[100], min;
    printf("Enter count of number :");
    scanf("%d", &n);
    printf("now enter the data of count %d :",n);

    for (i = 0; i < n; i++)
        scanf(" %d", &a[i]);


    min = a[0];
    for (i = 0; i < n; i++)
    {
        if (min > a[i])
            min= a[i];
    }

    printf("\n min is :%d",min);

    return 0;
}
