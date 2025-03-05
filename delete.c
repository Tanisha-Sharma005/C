#include<stdio.h>
int main(){
    int arr[20],num,i,loc;
    printf("\n enter no of element");
    scanf("%d",&num);
    printf("\n Enter %d element",num);
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);}
    printf("\n Enter the location to be deleted");
    scanf("%d",&loc);
    while(loc<num){
        arr[loc-1]=arr[loc];
        loc++;}
        num--;
        for(i=0;i<num;i++){
            printf("\n %d",arr[i]);}
    return 0;
}