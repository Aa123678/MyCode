#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++){  //在外部循环里，即使i=1写在外面也要打上“；”，括号里要有两个分号
        for(j=1;j<=i;j++){  //内层循环，j=1要打在括号里面
            printf("*");
        }
        printf("\n");
        
    }
    return 0;

}