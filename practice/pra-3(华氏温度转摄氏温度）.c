#include<stdio.h>
int main(void)
{
    double celsius,fahr;

     printf("Enter fahr:\n");
     scanf("%lf",&fahr);
     celsius=5*(fahr-32)/9;
     printf("celsius=%.2f\n",celsius);
    return 0;

}