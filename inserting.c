#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char data[100];
    int a[50], n, i, key, pos, cnt;

    fp = fopen("number.txt", "r"); 
    printf("enter count of array :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &a[i]); 
        printf("%d   ", a[i]);
    }

    printf("\n Enter element key to insert  :");
    scanf("%d", &key);

    printf("\n Enter position key to insert  :");
    scanf("%d", &pos);

    for (i = n; i >= pos; i--) 
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = key;
    n++;

    printf("array after insertion:\n ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    return 0;
}
