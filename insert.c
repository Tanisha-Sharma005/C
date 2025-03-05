#include <stdio.h>
int main()
{
    int arr[30], element, num, i, loc;
    printf("\n Enter no element");
    scanf("%d", &num);
    printf("\n Enter the numbers");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n Element to be inserted");
    scanf("%d", &element);
    printf("\n Enter the location");
    scanf("%d", &loc);
    for (i = num; i >= loc; i--)
    {
        arr[i] = arr[i - 1];
    }
    num++;
    arr[loc - 1] = element;
    for (i = 0; i < num; i++)
    {
        printf("\n%d", arr[i]);
    }
    return 0;
}