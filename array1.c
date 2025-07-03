#include <stdio.h>
int main()
{
    int n, i, a[100];
    printf("how many element you eant to Enter :");
    scanf("%d", &n);
    printf("enter %d data in it :", n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\n given input is :%d", n);

    for (i = 0; i < n; i++)
        printf("\n %d", a[i]);

    return 0;
}