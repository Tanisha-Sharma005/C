#include<stdio.h>
int main(){
    int arr1[30],arr2[30],num,i;
    printf("\n Enter the no of elements:");
    scanf("%d",&num);
    printf("\nEnter the values:");
    for(i=0;i<num;i++){
        scanf("%d",&arr1[i]);}
    for(i=0;i<num;i++){
        arr2[i]=arr1[i];}
    printf("The copied array is:");
    for(i=0;i<num;i++){
    printf("\narr2[%d]=%d",i,arr2[i]);}
    return 0;}
