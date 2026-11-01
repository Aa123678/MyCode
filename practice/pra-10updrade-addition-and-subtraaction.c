#include<stdio.h>
int main()
{
    int a,b;
    if(scanf("%d %d",&a,&b)!=2){
        printf("input error\n");
        return 1;   //输入失败，告诉系统出错了，else可加可不加
    }
    printf("%d+%d=%d\n",a,b,a+b);
    return 0;
}