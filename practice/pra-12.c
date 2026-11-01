#include<stdio.h>
#include<limits.h>
int main()
{
    int max_int=INT_MAX;
    unsigned int u=0;
    printf("INT_MAX=%d\n",max_int);
    printf("INT_MAX+1=%d\n",max_int+1);//有符号溢出结果未定义
    
    u=u-1;
    printf("0u-1=%u\n",u);
    return 0;
}