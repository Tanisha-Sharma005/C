#include<stdio.h>
int main(){
    int row,i,j;
    printf("Enter the value of rows:");
    scanf("%d",&row);
    for(i=0;i<row;i++){
        {
            for(j=0;j<row;j++){
        printf(" * ");
            } 
        }  
    printf("\n");
        }

    return 0;
    }
