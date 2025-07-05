// array must be in sorted order,  log n complexcity
#include <stdio.h>
int main()
{
    int n, i, j, a[50], temp, lw, hi, flag, mid, key;
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

    printf("\n now enter a key to fing ! :");
    scanf("%d", &key);

    lw = 0;
    hi = n - 1;
    flag = 0;

    while (lw <= hi)
    {
        mid=(lw+hi)/2;     
        if (a[mid] == key)
        {
            flag = 1;
            break;
        }

        else if (a[mid] > key)
            hi = mid - 1;

        else
            lw = mid + 1;
    }

    if (flag == 1)
        printf("found");
    else
        printf("not found");

    return 0;
}