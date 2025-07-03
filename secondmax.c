// wap to find 2nd largest num without sorting:
#include <stdio.h>
int main()
{
    int n, i, a[100], max, smax;
    printf("Enter count of number :");
    scanf("%d", &n);
    printf("now enter the data of count %d :", n);

    for (i = 0; i < n; i++)
        scanf(" %d", &a[i]);

    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }

    printf("\n max is :%d", max);

    smax = -1;
    for (i = 0; i < n; i++)
    {
        if (a[i] != max)
        {
            if (smax == -1 || a[i]>smax)
                smax = a[i];
        }
    }

    if (smax != -1)

        printf("\n 2nd largest number is :%d", smax);

    else

        printf("\n invalid");

    return 0;
}
