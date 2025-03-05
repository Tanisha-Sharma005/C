//sum of the digit of number
#include<stdio.h>
int sumdigit(int num);
int main(){
    int num,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Sum of digit of number %d is: %d",num,sumdigit(num));
    return 0;
}
int sumdigit(int num){
    int sum=0;
    while(num!=0){
        sum=sum + (num%10);
        num=num/10;
    }
    return sum;
}