#include<stdio.h>
int main()
{
    int i=1,n,a=1,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    while(i<=n){
        a=a*i;
        sum=sum+a;
        i++;
    }
    printf("%d",sum);
    return 0;//用int会溢出
}