#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
      if(n!=1&&n!=2){
        printf("这个程序我想用其它方法实现\n");
      }else{
    switch(n){
        case 1:printf("这个程序我想用循环语句实现\n");break;
        case 2:printf("这个程序我想用递归函数实现\n");break;
    }
}
    return 0;

}  