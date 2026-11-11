#include<stdio.h>
#include<math.h>
int main()
{
    int a=1,b=1,n=0;
    double eps,i=1,pi=0;
    printf("Enter eps:");
    scanf("%lf",&eps);
    while(fabs(i)>=eps){
    pi=pi+i;
    n++;
     b=b+2;
     a=a*(-1);
    i=a*1.0/b;

}
    printf("%.2f\n",pi*4);
    printf("%d\n",n);
    return 0;
}