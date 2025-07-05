#include <stdio.h>
int main()
{
    int n, i, a[100], max, min, sum, avg, choice, j, temp;
    printf("How many element you want to enter :");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid no.");
        return 0;
    }

    printf("\nenter %d data in it :", n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("given input is :");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nWe have :");
    printf("\n1.Max \n2.Min \n3.sum of elements \n4.Avg of elements \n5.Sorting");
    printf("\nEnter your choice :");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:

        // max of array

        max = a[0];
        for (i = 0; i < n; i++)
        {
            if (max < a[i])
                max = a[i];
        }
        printf("\nMax is %d", max);
        break;

    case 2:

        // min of array

        min = a[0];
        for (i = 0; i < n; i++)
        {
            if (min > a[i])
                min = a[i];
        }
        printf("\nMin is %d", min);
        break;

    case 3:

        // sum of array element

        sum = 0;
        for (i = 0; i < n; i++)
            sum = sum + a[i];

        printf("\nThe sum is: %d", sum);
        break;

    case 4:

        // avg no. of array

        sum = 0;
        for (i = 0; i < n; i++)
            sum = sum + a[i];

        printf("\nThe sum is: %d", sum);

        avg = sum / n;
        printf("\nAvg no. %d", avg);
        break;

    case 5:

        // sorting

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
        printf("Sorted array is:");
        for (i = 0; i < n; i++)
            printf("\n %d", a[i]);

        break;

    default:
        printf("\nInvalid choice");
    }

    return 0;
}
