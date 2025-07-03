// count of repetation (frequency)

#include <stdio.h>
int main()
{
    int n, i, a[50], cnt, key;
    printf("Enter count of number :");
    scanf("%d", &n);
    printf("enter data of count %d :", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\n Enter element key to find its Occurance  :");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key) // searchig operation
            cnt++;
    }

    if (cnt == 0)
        printf("not found ");

    else
        printf("\n count of occurance of key element in array is : %d", cnt);

    return 0;
}
