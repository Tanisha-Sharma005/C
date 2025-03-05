#include<stdio.h>
struct book
{
    int bookid;
    char bookname[20];
    char author[20];
};
struct book  b1[5];
//------------------------------------------------------------------
int main(){
    struct book b1[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf(" Enter the bookid:");
        scanf("%d",&b1[i].bookid);
        printf(" Enter the bookname:");
        scanf("%s",&b1[i].bookname);
        printf(" Enter the author:");
        scanf("%s",&b1[i].author);
    }
    //-----------------------------------------------------------------
    for(i=0;i<5;i++)
    {
        printf("%d \t %s \t %s \n", b1[i].bookid, b1[i].bookname, b1[i].author);
    }
    return 0;
}