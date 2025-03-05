#include<stdio.h>
int main(){
    int max(int *p, int n)
{
    int a=0, b=n-1;
    while (b!=0)
    {
        if (p[a] <= p[b])
        {
            a = a+1;
        }
        else
        {
            b = b-1;
        }
    }
    return p[a];
}
}