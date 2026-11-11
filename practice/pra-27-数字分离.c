#include<stdio.h>
int main()
{
    int a,b=1;
    scanf("%d",&a);
    while(a/b>=10)
      b=b*10;
      while(b>0){
        printf("%d",a/b%10);
        b=b/10;
        if(b>0)
        printf(",");
      
    }
    printf("\n");
    return 0;
}