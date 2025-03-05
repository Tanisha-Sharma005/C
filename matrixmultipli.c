#include<stdio.h>
int main(){
    int i,j,m,n,a[2][2],b[2][2];
    printf("Enter array elements of matrix a :\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
   printf("Enter array elements of matrix b :\n");
    for(m=0;m<2;m++){
        for(n=0;n<2;n++){
            scanf("%d",&a[m][n]);
        }
    }

    printf(" multiplication Matrix is as follows :\n");
    for(i=0,m=0;(i<2)&&(m<2);i++,m++){
        for(j=0,n=0;(j<2)&&(n<2);j++,n++){
            printf("%d\t",(a[i][j])*(a[m][n]));
        }
        printf("\n");
    }
    return 0;
}