#include<stdio.h>
//function decalaration
int factorial(int n);

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("factorial of %d is : %d",n,factorial(n));
    return 0;
}
//function definition
int factorial(int n){
    if(n==0){
        return 1;
    }
    int factnm1 = factorial(n-1);
    int factn = factnm1*n;
    return factn;

}