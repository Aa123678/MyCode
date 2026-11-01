#include<stdio.h>
int main()
{
    int i,k;
    double sum=0 ;
    scanf("%d",&k);
    for(i=1;sum<=k;i++){
        sum=sum+1.0/i;
    }
    printf("%d\n",i-1);
    return 0;
}