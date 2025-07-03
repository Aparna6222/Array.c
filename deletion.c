// accesssing array element from alredy creted txt file using FILE

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char data[100];
    int a[50], n, i, j, key, cnt;

    fp = fopen("array.txt", "r"); // accesing our (file_name).txt file here with "r"tha is read only

    printf("enter count of array :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &a[i]); // accessing the file  converting char data of file into int type
        printf("%d   ", a[i]);
    }

    printf("\n Enter element key to delete  :");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            for (j = i; j < n - 1; j++)
                a[j] = a[j + 1];

            n--;
            break;     // remove break for deleting same no multiple time from array    ( add i-- )
        }
    }
    
    printf("array after deletion:\n ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    return 0;
}