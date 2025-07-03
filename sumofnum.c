// sum = it stores previous addition
#include <stdio.h>
int main()
{
    int n, i, a[100], sum;
    printf("how many element you want to Enter :");
    scanf("%d", &n);
    printf("enter %d data in it :", n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    
    sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i];

    printf("the sum is :%d", sum);

    return 0;
}
