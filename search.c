#include<stdio.h>
int main(){
    int arr[30],element,num,i;
    printf("\n Enter the no of elements");
    scanf("%d",&num);
    printf("\nEnter the values");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);}
    printf("\nEnter the element to be searched");
    scanf("%d",&element);
    i=0;
    while(i<num && element!=arr[i]){
        i++;}
    if(i<num){
        printf("Number found at the location=%d",i+1);
    }
    else{
        printf("\nNumber not found");}
    return 0;
}