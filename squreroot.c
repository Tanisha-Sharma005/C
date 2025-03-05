#include<stdio.h>
#include<math.h>
// function declaration
float squreroot(int a);
int main(){
    int x;
    printf("Enter that number whose squre root you want to be find out : ");
    scanf("%d",&x);
    printf("The squre root of %d is : %f",x,squreroot(x));
    return 0;
}
float squreroot(int a){
    float n;
    n=sqrtf(a);
    return n;
}