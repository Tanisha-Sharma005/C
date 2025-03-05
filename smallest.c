#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a,b:");
    scanf("%d%d",&a,&b);
    (a>b)?printf("Smallest no is %d",b):printf("Smallest no is %d",a);
    return 0;
}