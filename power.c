#include<stdio.h>
#include<math.h>
void power(int num , int exponent);
int main(){
    int num,exponent;
    printf("enter the values of num :\n ");
    scanf("%d",&num);
    printf("enter the power : \n");
    scanf("%d",&exponent);
    printf("The result is :\n");
    power(num,exponent);
    return 0;
}
void power(int num , int exponent){
    float x=pow(num,exponent);
    printf("%f",x);
}