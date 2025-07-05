// accesssing array element from alredy creted txt file using FILE 

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char data[100];
    int a[50], n, i, key, cnt;

    fp = fopen("number.txt", "r"); 

    printf("enter count of array :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &a[i]); 
        printf("%d   ", a[i]);
    }

    printf("\n Enter element key to find its Occurance  :");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key) 
            cnt++;
    }

    if (cnt == 0)
        printf("not found ");

    else
        printf("\n count of occurance of key element in array is : %d", cnt);

    return 0;
}