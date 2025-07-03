// accesssing array element from alredy creted txt file using FILE 

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char data[100];
    int a[50], n, i, key, cnt;

    fp = fopen("array.txt", "r"); // accesing our (file_name).txt file here with "r"tha is read only 

    printf("enter count of array :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &a[i]); // accessing the file  converting char data of file into int type
        printf("%d   ", a[i]);
    }

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