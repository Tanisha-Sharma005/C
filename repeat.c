#include<stdio.h>
int main(){
    int n,a[n],i,count=0,j;
    printf("Enter array size:\n");
    scanf("%d",&n);
    printf("Enter %d element:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
        for(i=0;i<n-1;i++){
                for(j=1;j<n;j++){
                    if(a[i]=a[j]){
                        count++;
                    }
                }
        }
        printf("Repeated element is %d times\n",count);
        return 0;
}