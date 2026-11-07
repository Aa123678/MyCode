#include<stdio.h>
#include<math.h>
int main()
{
    double edge,S1,S2,a;
    a=pow(3,1.0/2);
    scanf("%lf",&edge);
    S1=edge*edge;
    S2=edge*edge*(a/4.0);
    printf("%.2f %.2f\n",S1,S2);
    return 0;
}