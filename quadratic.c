#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,p,q;
    int d;
    printf("Enter the value of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    d =  b*b-4*a*c;
    p =  ((-b)+ sqrt (d))/(2*a);
    q =  ((-b)- sqrt(d))/(2*a);  
    printf("The value of p,q is %f %f",p,q);
    return 0;
}