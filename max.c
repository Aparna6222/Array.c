#include <stdio.h>
int main()
{
    int n, i, a[100], max;
    printf("Enter count of number :");
    scanf("%d", &n);
    printf("now enter the data of count %d :",n);

    for (i = 0; i < n; i++)
        scanf(" %d", &a[i]);


    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }

    printf("\n max is :%d",max);

    return 0;
}
