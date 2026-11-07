#include<stdio.h>
int main()
{
    char ch,a=0;
    ch=getchar();
     if(ch>='0'&&ch<='9'){
       a++;
     }
     printf("%d",a);
     return 0;
}