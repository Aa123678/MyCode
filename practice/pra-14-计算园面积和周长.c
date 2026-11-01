#include<stdio.h>
#define PI 3.1415926

int main()
{
const double radius=2.5;
double area=PI*radius*radius;
double circumference= 2*PI*radius;

printf("area=%.2f\n",area);
printf("circumference=%.2f\n",circumference);
return 0;

}
    
