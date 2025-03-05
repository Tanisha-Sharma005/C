#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int i;
    for(i=0;i<5;i++){
    printf("\n%d %d %d %d",arr[i], *(i+arr), *(arr+i), i[arr]);
    }
    return 0;
}