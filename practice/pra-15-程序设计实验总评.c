#include<stdio.h>
int main()
{
    int a,b,c;
    double sum;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=0&&a<=100&&b>=0&&b<=100&&c>=0&&c<=100){
        sum=a*0.1+b*0.2+c*0.7;
        if(sum>=60&&sum<=100){
            printf("Congratulations! You passed the exam!");
        }else{
            printf("Sorry! You failed the exam!");
        }
        }else{
            printf("Input Error!");
    }
    return 0;
}