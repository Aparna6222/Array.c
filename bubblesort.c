// by default have ascending sorting in this
#include <stdio.h>
int main()
{
    int n, i, j, a[50],temp;
    printf("Enter count of number :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])         
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("sorted array is :");
    for (i = 0; i < n; i++)
        printf("\n %d", a[i]);
    return 0;
}
