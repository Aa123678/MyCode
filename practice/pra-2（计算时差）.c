#include<stdio.h>
int main()
{
    int hour1,minute1;
    int hour2,minute2;
    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);
    int t=hour2*60+minute2-(hour1*60+minute1);
    int t1=t/60,t2=t%60;
    printf("%d小时%d分钟\n",t1,t2);
    return 0;
}