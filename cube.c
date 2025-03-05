#include<stdio.h>
int cube();
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("The cube of %d is : %d ",n,cube(n));
    return 0;
}
int cube(int x){
    return x*x*x;
}