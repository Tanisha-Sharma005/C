#include<stdio.h>
struct employee
{
    int empid;
    char empname[20];
    struct 
    {
        int basicpay;
    } salary;  
} e1;
int main(){
    printf("\n enter the id");
    scanf("%d",&e1.empid);
    printf("\n enter the name");
    scanf("%s",&e1.empname);
    printf("\n enter the basic salary");
    scanf("%d",&e1.salary.basicpay);
    printf("\nDATA");
    printf("\nID=%d",e1.empid);
    printf("\nNAME=%s",e1.empname);
    printf("\nBASICPAY=%d",e1.salary.basicpay);
    return 0;
}