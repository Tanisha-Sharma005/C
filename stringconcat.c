#include<stdio.h>
#include<string.h>
int main(){
    char str1[10];
    printf("Enter first string :\n");
    scanf("%s",str1);
    char str2[10];
    printf("Enter second string :\n");
    scanf("%s",str2);
    printf("Now new string after removing space: %s",strcat(str1,str2));
    return 0;
}