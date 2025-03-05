#include<stdio.h>
int main(){
    int i,j,a[3][4];
    printf("Enter array elements:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is as follows :\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}