
#include <stdio.h>
int main()
{
    int n, i, a[50], max, flag, key;
    printf("Enter count of number :");
    scanf("%d", &n);
    printf("enter data of count %d :",n);
    for (i = 0; i < n; i++)
     scanf("%d",&a[i]);

    printf("\n now enter element to search :");
    scanf("%d", &key);

    flag = 0;

    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("found");
    else
        printf("not found");
    return 0;
}
