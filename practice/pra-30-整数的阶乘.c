#include<stdio.h>
int main()
{
    double a=1;
    int i,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
    a=a*i;
    }
    printf("%.0f",a);
    return 0;
}