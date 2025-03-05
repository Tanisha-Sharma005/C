#include<stdio.h>
int main(){
    char s[20];
    int i,count=0;
    printf("Enter a string :\n");
    scanf("%d",s);
    for(i=0;s[i]!='\0';i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
        count++;
    }
    }
    printf("vowels in the entered string :\n");
    printf("%d",count);
    
    return 0;
}