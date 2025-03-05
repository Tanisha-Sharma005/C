#include<stdio.h>
//check enter character is digit or not
int checkchar(char ch);
int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    checkchar(ch);
    return 0;
}
//function definition
int checkchar(char ch){
    if(ch>=0&& ch<=9){
    printf("%C is a digit",ch);}
    else if((ch>=65&&ch<=90)||(ch>=97&&ch<=122)){
    printf("%C is a alphabet",ch);}
    else{
        printf("%C is a special character",ch);}
        return 0;
}