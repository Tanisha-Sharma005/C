#include<stdio.h>
int count(int n);
int main(){
    int N;
    printf("Enter the no:");
    scanf("%d",&N);
    printf("The number %d contains %d digits.",N,count(N));
    return 0;
}
int count(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}