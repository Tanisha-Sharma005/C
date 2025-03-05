#include <stdio.h>
int main()
{
    int original, rem, num, res;
    printf("Enter a number:");
    scanf("%d",original);
    original = num;
    while (original != 0){
        rem = original % 10;
        res = res + rem * rem;
        original = original / 10;
    }
    if (original == num){
        printf("Enter num %d is armastrong", original);
    }
    else {
        printf("Enter num %d is not armastrong", original);
    }
    return 0;
}