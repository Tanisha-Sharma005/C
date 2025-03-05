#include <stdio.h>
int main()
{
    int n, a[n], i, max, min;
    printf("Enter the array size:");
    scanf("%d", &n);
    printf("Enter the %d array element:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("a[%d]= %d",i, a[i]);}
        max = a[0];
        min = a[0];
        for (i = 0; i < n; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
            }
             else if (a[i] < min)
            {
                min = a[i];
            }
        }
        printf("Maximum value is %d", max);
        printf("Minimum value is %d", min);
        return 0;
    }