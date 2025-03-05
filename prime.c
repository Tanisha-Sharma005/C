#include<stdio.h>
int main(){
    int num,i,count=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(i!=num){
        for(i=1;i<=num;i++){
            if(num%i==0){
                count++;
            }
        }
    }
    if(count>2)
    printf("Enter number is prime");
    else{
        printf("Enter number is not prime");
    }
    return 0;
}
