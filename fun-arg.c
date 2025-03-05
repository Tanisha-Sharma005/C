#include<stdio.h>
void fun(struct sample);
struct sample
{
    int no;
    float avg;
}a;
//---------------------------------------------
int main(){
    a.no=75;
    a.avg=90.25;
    fun(a);
    return 0;
}
//------------------------------------------------
void fun(struct sample p)
{
    printf("The no is=%d Average is %f",p.no  ,p.avg);
}
