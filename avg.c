#include<stdio.h>
//function to calculate square of a number
float average(float x,float y,float z);

int main(){
    float a,b,c,avg;
    printf("Enter three values: ");
    scanf("%f %f %f",&a, &b, &c);
    avg = average(a,b,c);
    printf("average is : %f",avg);
    return 0;
}

float average(float x, float y,float z){
    return (x+y+z)/3;
}