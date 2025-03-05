#include<stdio.h>
int main(){
    int num[5];
    int i;
    for(i=0;i<5;i++){
        scanf("%d",&num[i]);}
    for(i=0;i<5;i++){
        printf("\n Array Element num[%d]=%d",i,num[i]);
    }
    return 0;
}